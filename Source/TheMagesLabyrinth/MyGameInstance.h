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
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddGold(int32 Gold);

	// Used to get current gold, can be used/called in debug or later implemented for UI
	UFUNCTION(BlueprintCallable, Category = "Score")
	int32 GetGold() const;

	// Resets gold, should be called upon death/game over
	UFUNCTION(BlueprintCallable, Category = "Score")
	void ResetGold();

private:
	// Starting gold is set to 0
	int32 TotalGold = 0;

	
};
