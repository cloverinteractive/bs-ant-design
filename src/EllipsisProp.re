type ellipsis = {
  .
  "rows": int,
  "expadable": bool,
  "onExpand": unit => unit,
};

type t =
  | Bool(bool)
  | Ellipsis(ellipsis);

type js;

external ofBool: bool => js = "%identity";
external ofEllipsis: ellipsis => js = "%identity";

let toJs: t => js =
  fun
  | Bool(a) => ofBool(a)
  | Ellipsis(a) => ofEllipsis(a);
