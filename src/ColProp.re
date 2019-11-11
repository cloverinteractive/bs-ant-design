type properties = {
  .
  "offset": int,
  "order": int,
  "pull": int,
  "push": int,
  "span": int,
};

type t =
  | Number(int)
  | Properties(properties);

type js;

external ofInt: int => js = "%identity";
external ofProperties: properties => js = "%identity";

let toJs: t => js =
  fun
  | Number(a) => ofInt(a)
  | Properties(a) => ofProperties(a);
