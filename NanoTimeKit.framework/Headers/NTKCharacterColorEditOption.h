//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKValueEditOption.h>

@class UIColor;

@interface NTKCharacterColorEditOption : NTKValueEditOption
{
}

+ (id)_localizedNameForValue:(unsigned int)arg1;
+ (id)_snapshotKeyForValue:(unsigned int)arg1;
+ (unsigned int)indexOfOption:(id)arg1 forCharacter:(unsigned int)arg2;
+ (id)optionAtIndex:(unsigned int)arg1 forCharacter:(unsigned int)arg2;
+ (unsigned int)numberOfOptionsForCharacter:(unsigned int)arg1;
+ (id)optionWithOption:(id)arg1 forCharacter:(unsigned int)arg2;
+ (id)optionWithFaceColor:(unsigned int)arg1;
@property(readonly, nonatomic) float desaturation;
@property(readonly, nonatomic) UIColor *colorValue;
@property(readonly, nonatomic) unsigned int color;
- (id)_valueToFaceBundleStringDict;

@end
