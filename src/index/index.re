let _console = Js.Unsafe.get Js.Unsafe.global "console";
let _log: string => unit = fun s => {
  let arr = (Array.of_list [Js.Unsafe.inject (Js.string s)]);
  Js.Unsafe.meth_call _console "log" arr
};
Lwt_js_events.clicks Dom_html.document (fun _ _ => {
  _log "click";
  Lwt.return ()
})
