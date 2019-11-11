type delay = {. "delay": int};
type t =
  | Bool(bool)
  | Delay(delay);
type js;

external ofBool: bool => js = "%identity";
external ofDelay: delay => js = "%identity";

let toJs: t => js =
  fun
  | Bool(a) => ofBool(a)
  | Delay(a) => ofDelay(a);
