// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnClueSkeleton_C::OnDespawn (58 bytes)
void BP_SpawnClueSkeleton_C::OnDespawn()
{
    idx:285984();
    return;
}

// Recovered Kismet: BP_SpawnClueSkeleton_C::fn_idx_282659 (22 bytes)
void BP_SpawnClueSkeleton_C::fn_idx_282659()
{
    idx:285984();
    return;
}

// Recovered Kismet: BP_SpawnClueSkeleton_C::OnSpawn (40 bytes)
void BP_SpawnClueSkeleton_C::OnSpawn()
{
    idx:285984();
    return;
}

// Recovered Kismet: BP_SpawnClueSkeleton_C::fn_idx_285984 (253 bytes)
void BP_SpawnClueSkeleton_C::fn_idx_285984()
{
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_FA;
    UBlueprintSpawnAIStepBase::OnBattleWon();
    auto CallFunc_SpawnDroppedItem_ReturnValue = this->SpawnDroppedItem(K2Node_Event_Pawn2, idx_285982, false, false);
    this->SignalComplete();
L_FA:
    return;
}
