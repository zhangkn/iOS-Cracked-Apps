//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CRNPlugin.h"

@interface CRNMapPlugin : CRNPlugin
{
}

- (void)callSystemMapFrom:(struct CLLocationCoordinate2D)arg1 fromTitle:(id)arg2 to:(struct CLLocationCoordinate2D)arg3 toTitle:(id)arg4;
- (void)callMapApp:(id)arg1 from:(struct CLLocationCoordinate2D)arg2 fromTitle:(id)arg3 to:(struct CLLocationCoordinate2D)arg4 toTitle:(id)arg5;
- (_Bool)isShowGoogleMapForPOIList:(id)arg1;
- (void)callFunction:(id)arg1 parameters:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end
