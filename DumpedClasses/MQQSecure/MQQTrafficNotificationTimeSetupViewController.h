//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class MQQCustomInputTextField, NSMutableArray, NSString, UIPickerView;

@interface MQQTrafficNotificationTimeSetupViewController : MQQBaseViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    MQQCustomInputTextField *_timeTextField;
    UIPickerView *_timePickerView;
    NSMutableArray *_components;
    NSMutableArray *_selectedComponents;
}

@property(retain, nonatomic) NSMutableArray *selectedComponents; // @synthesize selectedComponents=_selectedComponents;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property(retain, nonatomic) UIPickerView *timePickerView; // @synthesize timePickerView=_timePickerView;
@property(retain, nonatomic) MQQCustomInputTextField *timeTextField; // @synthesize timeTextField=_timeTextField;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)updateText;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

