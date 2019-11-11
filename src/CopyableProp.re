type copyable = {
  .
  "text": string,
  "onCopy": unit => unit,
};

type t =
  | Bool(bool)
  | Copyable(copyable);

type js;

external ofBool: bool => js = "%identity";
external ofCopyable: copyable => js = "%identity";

let toJs: t => js =
  fun
  | Bool(a) => ofBool(a)
  | Copyable(a) => ofCopyable(a);
