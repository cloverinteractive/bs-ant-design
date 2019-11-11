type editable = {
  .
  "editing": bool,
  "onStart": unit => unit,
  "onChange": string => unit,
};

type t =
  | Bool(bool)
  | Editable(editable);

type js;

external ofEditable: editable => js = "%identity";
external ofBool: bool => js = "%identity";

let toJs: t => js =
  fun
  | Bool(a) => ofBool(a)
  | Editable(a) => ofEditable(a);
