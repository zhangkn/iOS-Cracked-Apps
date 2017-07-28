//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RegisterBaseController.h"

#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UIScrollView, UITextField, UserLoginViewController;

@interface AccountRegisterController : RegisterBaseController <UITextFieldDelegate, UIScrollViewDelegate>
{
    double _transformY;
    UIScrollView *_myScrollView;
    UserLoginViewController *_loginController;
    UITextField *_accountTextField;
    UITextField *_pwTextField;
    UITextField *_nickTextField;
    UITextField *_currentTextField;
    UILabel *_accountWarnLabel;
    UILabel *_pwWarnLabel;
    UILabel *_nickWarnLabel;
    UILabel *_sexWarnLabel;
    UIButton *_girlButton;
    UIButton *_boyButton;
    UIButton *_doneButton;
    UIButton *_phoneRegisterButton;
}

@property(nonatomic) __weak UIButton *phoneRegisterButton; // @synthesize phoneRegisterButton=_phoneRegisterButton;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIButton *boyButton; // @synthesize boyButton=_boyButton;
@property(nonatomic) __weak UIButton *girlButton; // @synthesize girlButton=_girlButton;
@property(retain, nonatomic) UILabel *sexWarnLabel; // @synthesize sexWarnLabel=_sexWarnLabel;
@property(retain, nonatomic) UILabel *nickWarnLabel; // @synthesize nickWarnLabel=_nickWarnLabel;
@property(retain, nonatomic) UILabel *pwWarnLabel; // @synthesize pwWarnLabel=_pwWarnLabel;
@property(retain, nonatomic) UILabel *accountWarnLabel; // @synthesize accountWarnLabel=_accountWarnLabel;
@property(retain, nonatomic) UITextField *currentTextField; // @synthesize currentTextField=_currentTextField;
@property(retain, nonatomic) UITextField *nickTextField; // @synthesize nickTextField=_nickTextField;
@property(retain, nonatomic) UITextField *pwTextField; // @synthesize pwTextField=_pwTextField;
@property(retain, nonatomic) UITextField *accountTextField; // @synthesize accountTextField=_accountTextField;
@property(nonatomic) __weak UserLoginViewController *loginController; // @synthesize loginController=_loginController;
@property(retain, nonatomic) UIScrollView *myScrollView; // @synthesize myScrollView=_myScrollView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (long long)getSexType;
- (_Bool)verifySexInput;
- (_Bool)verifyNickName:(id)arg1;
- (_Bool)verifyPassword:(id)arg1;
- (_Bool)verifyAccount:(id)arg1;
- (void)verifyAccountExist:(id)arg1;
- (void)selectAction:(id)arg1;
- (id)title;
- (void)registerAction:(id)arg1;
- (void)moveInputBarWithKeyboardOffSet;
- (void)keyboardWillHide:(id)arg1;
- (void)removeNotification;
- (void)registNotification;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)changeRegistAction:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
