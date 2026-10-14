# Recovered Blueprint graphs

`cpp/` contains C++-style source reconstructed from the real serialized Kismet
bytecode. It resolves UFunction owners, return types and method names from the
provided SDK (11,091 reflected methods), and preserves assignments, casts,
calls, branches and jumps. `graphs/` contains the matching control-flow data.

The root `.txt` files are the raw evidence: Kismet nodes, execution/data flow,
jumps, calls, casts, local variables and object references. Empty
`Nothing -> EndOfScript` functions are deliberately excluded.

Staged classes: 2644

Source data is `investigation/decompiled_blueprints`; the provided SDK supplies
reflection signatures but does not itself contain UEdGraph layout/pin-GUID data.
Where a function is named only `fn_idx_*`, the old bytecode dumper did not
preserve its FName and no matching reflected UFunction exists in the SDK; the
generator intentionally leaves that identifier intact rather than fabricate one.
