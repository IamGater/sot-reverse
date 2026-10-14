// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FotDHandHatch_C::UserConstructionScript (3 bytes)
void BP_FotDHandHatch_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_FotDHandHatch_C::MoveHandsMeshes (40 bytes)
void BP_FotDHandHatch_C::MoveHandsMeshes()
{
    ExecuteUbergraph_BP_FotDHandHatch();
    return;
}

// Recovered Kismet: BP_FotDHandHatch_C::ExecuteUbergraph_BP_FotDHandHatch (1262 bytes)
void BP_FotDHandHatch_C::ExecuteUbergraph_BP_FotDHandHatch()
{
    AHandHatch::SetHandsMeshesVisiblity(false);
    if (!idx_232435) goto L_287;
L_287:
    AHandHatch::SetHandsMeshesVisiblity(true);
    return;
}
