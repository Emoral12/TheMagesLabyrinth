// Team Berry's awesome .cpp files

#include "MyGameInstance.h"

void UMyGameInstance::AddGold(int32 Gold) 
{
	TotalGold += Gold;

	// Debug Text to see if the function is working properly or noth
	UE_LOG(LogTemp, Log, TEXT("You got gold! Your Wealth is now up to: %d"), TotalGold);
}

int32 UMyGameInstance::GetGold() const
{
	return TotalGold;
}

void UMyGameInstance::ResetGold()
{
	TotalGold = 0;
}