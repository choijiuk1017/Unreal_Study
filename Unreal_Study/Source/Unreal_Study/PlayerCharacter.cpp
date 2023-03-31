#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// ����Ʈ�� ����
APlayerCharacter::APlayerCharacter()
{
    // �� ĳ���Ͱ� �����Ӹ��� Tick()�� ȣ���ϵ��� �����մϴ�.  �� ������ �ʿ� ���� ��� ��Ȱ��ȭ�ϸ� �����ս��� ���˴ϴ�.
    PrimaryActorTick.bCanEverTick = true;

    // Ŭ���� ������Ʈ �ν��Ͻ�ȭ
    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
    CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));

    //ĳ���� �޽� Ʈ�������� ��ġ�� ȸ���� �����մϴ�.
    GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -90.0f), FQuat(FRotator(0.0f, -90.0f, 0.0f)));

    // Ŭ���� ������Ʈ�� ����Ʈ ĳ������ ���̷�Ż �޽� ������Ʈ�� ����ġ�մϴ�.
    SpringArmComp->SetupAttachment(GetMesh());
    CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

    //������ ���� Ŭ���� ������ �����մϴ�.
    SpringArmComp->bUsePawnControlRotation = true;

    //ĳ���� �����Ʈ ������Ʈ�� Ŭ���� ������ �����մϴ�.
    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->bUseControllerDesiredRotation = true;
    GetCharacterMovement()->bIgnoreBaseRotation = true;
}

// ���� ���� �Ǵ� ���� �� ȣ��
void APlayerCharacter::BeginPlay()
{
    Super::BeginPlay();

}

void APlayerCharacter::MoveForward(float AxisValue)
{
    if ((Controller != nullptr) && (AxisValue != 0.0f))
    {
        // ���� ã��
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        // ���� ���� ���ϱ�
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, AxisValue);
    }
}

void APlayerCharacter::MoveRight(float AxisValue)
{
    if ((Controller != nullptr) && (AxisValue != 0.0f))
    {
        // ������ ã��
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        // ������ ���� ���ϱ� 
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        // �ش� �������� �̵� �߰�
        AddMovementInput(Direction, AxisValue);
    }
}

void APlayerCharacter::BeginSprint()
{
    GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}

void APlayerCharacter::EndSprint()
{
    GetCharacterMovement()->MaxWalkSpeed = 600.f;
}

void APlayerCharacter::BeginCrouch()
{
    Crouch();
}

void APlayerCharacter::EndCrouch()
{
    UnCrouch();
}

// �����Ӹ��� ȣ��
void APlayerCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

//�Լ� ����� �Է¿� ���ε��ϱ� ���� ȣ��
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
    PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &APlayerCharacter::BeginCrouch);
    PlayerInputComponent->BindAction("Crouch", IE_Released, this, &APlayerCharacter::EndCrouch);
    PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APlayerCharacter::BeginSprint);
    PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APlayerCharacter::EndSprint);
}