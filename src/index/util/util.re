let compose: ('b => 'c) => ('a => 'b) => 'a => 'c = fun g h x => g(h x);

let toJsString = compose Js.Unsafe.inject Js.string;

let console = Js.Unsafe.get Js.Unsafe.global "console";

let log = fun args => {
  let _args = List.map toJsString args;
  Js.Unsafe.meth_call console "log" (Array.of_list _args)
}
