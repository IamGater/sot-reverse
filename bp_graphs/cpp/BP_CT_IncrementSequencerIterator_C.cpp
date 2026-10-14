// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_IncrementSequencerIterator_C::OnBeginCustom (251 bytes)
void BP_CT_IncrementSequencerIterator_C::OnBeginCustom()
{
    this->SignalComplete();
    auto CallFunc_Add_IntInt_ReturnValue = CurrentIndex;
    auto CallFunc_Less_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
    auto idx_282269 = CallFunc_Less_IntInt_ReturnValue;
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = idx_282269;
    return;
}
