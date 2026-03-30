// Team Berry's awesome header files

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class THEMAGESLABYRINTH_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	// Can be used and called within Blueprint Graphs to add gold to the player's number of total gold 
	UFUNCTION(BlueprintCallable, Category = "Gold")
	void AddGold(int32 Gold);

	// Used to get current gold, can be used/called in debug or later implemented for UI
	UFUNCTION(BlueprintCallable, Category = "Gold")
	int32 GetGold() const;

	// Resets gold, should be called upon death/game over
	UFUNCTION(BlueprintCallable, Category = "Gold")
	void ResetGold();

	// Can be used and called within Blueprint Graphs to increase or decrease player's HP value
	UFUNCTION(BlueprintCallable, Category = "Hit Points")
	void AddHitPoints(float HitPoints);

	// Used to get current HP value, can be used/called in debug or later implemented for UI
	UFUNCTION(BlueprintCallable, Category = "Hit Points")
	float GetHitPoints() const;

	// Resets HP back to its starting value, should be called upon death/game over
	UFUNCTION(BlueprintCallable, Category = "Hit Points")
	void ResetHitPoints();

	// Can be used and called within Blueprint Graphs to increase or decrease player's MP value
	UFUNCTION(BlueprintCallable, Category = "Mana Points")
	void AddManaPoints(int32 ManaPoints);

	// Used to get current MP value, can be used/called in debug or later implemented for UI
	UFUNCTION(BlueprintCallable, Category = "Mana Points")
	int32 GetManaPoints() const;

	// Resets MP back to its starting value, should be called upon death/game over
	UFUNCTION(BlueprintCallable, Category = "Mana Points")
	void ResetManaPoints();

private:
	// Starting gold is set to 0
	int32 TotalGold = 0;

	// Starting HP value is set to 100
	float TotalHitPoints = 300.0;

	// Starting MP Value is set to 150
	int32 TotalManaPoints = 150;
};
