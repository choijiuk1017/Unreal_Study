#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class CHARACTERMOVEMENT_API APlayerCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    //�� ĳ������ ������Ƽ�� ����Ǵ� ����Ʈ�� ����
    APlayerCharacter();

protected:
    // ���� ���� �Ǵ� ���� �� ȣ��
    virtual void BeginPlay() override;

    //������ �� ������Ʈ�� �÷��̾� �ڿ� �ִ� ī�޶� ���󰩴ϴ�.
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        class USpringArmComponent* SpringArmComp;

    //�÷��̾ ī�޶� ���󰩴ϴ�.
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        class UCameraComponent* CameraComp;

    //����/���� �Է��� ���� ȣ���մϴ�.
    void MoveForward(float InputAxis);

    //����/������ �Է��� ���� ȣ���մϴ�.
    void MoveRight(float InputAxis);

    //ĳ���� �����Ʈ �ӵ��� ������Ʈ ������ �����մϴ�.
    void BeginSprint();

    //ĳ���� �����Ʈ �ӵ��� ����Ʈ �ӵ� ������ �ٽ� �����մϴ�.
    void EndSprint();

    //ĳ���Ϳ��� �ɱ⸦ ��û�մϴ�.
    void BeginCrouch();

    //ĳ���Ϳ��� �ɱ� ���Ḧ ��û�մϴ�.
    void EndCrouch();

public:

    // �����Ӹ��� ȣ��
    virtual void Tick(float DeltaTime) override;

    //�Լ� ����� �Է¿� ���ε��ϱ� ���� ȣ��
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
