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

void UMyGameInstance::AddHitPoints(float HitPoints)
{
	TotalHitPoints += HitPoints;

	// Debug Text to see if the function is working properly or noth
	UE_LOG(LogTemp, Log, TEXT("Current HP value is: %d"), TotalHitPoints);
}

int32 UMyGameInstance::GetHitPoints() const
{
	return TotalHitPoints;
}

void UMyGameInstance::ResetHitPoints()
{
	TotalHitPoints = 300.0;
}

void UMyGameInstance::AddManaPoints(int32 ManaPoints)
{
	TotalManaPoints += ManaPoints;

	// Debug Text to see if the function is working properly or noth
	UE_LOG(LogTemp, Log, TEXT("Current MP value is: %d"), TotalManaPoints);
}

int32 UMyGameInstance::GetManaPoints() const
{
	return TotalManaPoints;
}

void UMyGameInstance::ResetManaPoints()
{
	TotalManaPoints = 150;
}