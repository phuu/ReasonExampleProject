Dom_events.listen Dom_html.document Dom_events.Typ.click (fun _ _ => {
  Util.log ["clicky"];
  true
})
