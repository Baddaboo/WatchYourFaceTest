//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>
#import "NSSecureCoding.h"
#import "NTKEditModeMapping.h"
#import "NTKRestrictedApplicationsChangeObserver.h"

@class NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSString, NTKFaceConfiguration;

@interface NTKFace : NSObject <NSSecureCoding, NSCopying, NTKRestrictedApplicationsChangeObserver, NTKEditModeMapping>
{
    NTKFaceConfiguration *_configuration;
    NSHashTable *_observers;
    NSDictionary *_complicationSlotDescriptors;
    _Bool _editOptionsPrepared;
    NSMutableDictionary *_selectedSlotsByEditMode;
    _Bool _suppressingConfigurationChangeNotifications;
    _Bool _configurationChangedWhileSuppressingNotifications;
    _Bool _resourceDirectoryIsHardLink;
    _Bool _isLibraryFace;
    _Bool _beingEdited;
    int _faceStyle;
    NSString *_resourceDirectory;
    int _mostRecentEditMode;
    int _complicationPickerStyle;
}

+ (id)PPTBlankFace;
+ (Class)_faceClassForStyle:(int)arg1;
+ (id)faceWithJSONObjectRepresentation:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (unsigned int)_dateComplicationSlotSupportedStyles;
+ (id)_monogramComplicationSlot;
+ (id)_dateComplicationSlot;
+ (_Bool)_complication:(id)arg1 isValidForSlot:(id)arg2;
+ (_Bool)_customEditModeIsShowSeconds:(int)arg1;
+ (_Bool)_customEditModeIsPosition:(int)arg1;
+ (_Bool)_customEditModeIsColor:(int)arg1;
+ (id)_localizedNameOverrideForCustomEditMode:(int)arg1;
+ (id)_defaultSelectedComplicationSlot;
+ (id)monogramSlot;
+ (id)dateSlot;
+ (id)fixedComplicationSlots;
+ (id)_complicationSlotDescriptors;
+ (int)_customEditModeForUniqueConfiguration;
+ (id)_defaultOptionForCustomEditMode:(int)arg1 slot:(id)arg2;
+ (id)_defaultSelectedSlotForCustomEditMode:(int)arg1;
+ (id)_slotsForCustomEditMode:(int)arg1;
+ (id)_customEditModes;
+ (id)_sampleFaceDifferentFromFaces:(id)arg1;
+ (id)_initialDefaultComplicationForSlot:(id)arg1;
+ (unsigned int)maximumRemoteComplicationsOnAnyFace;
+ (id)sampleFaceOfStyle:(int)arg1 differentFromFaces:(id)arg2;
+ (id)defaultFaceOfStyle:(int)arg1;
+ (_Bool)customEditModeIsShowSeconds:(int)arg1;
+ (_Bool)customEditModeIsPosition:(int)arg1;
+ (_Bool)customEditModeIsColor:(int)arg1;
+ (id)localizedNameForCustomEditMode:(int)arg1;
+ (id)customEditModes;
+ (id)_linkedResourceRootDirectory;
@property(readonly, nonatomic) int complicationPickerStyle; // @synthesize complicationPickerStyle=_complicationPickerStyle;
@property(nonatomic) _Bool beingEdited; // @synthesize beingEdited=_beingEdited;
@property(nonatomic) int mostRecentEditMode; // @synthesize mostRecentEditMode=_mostRecentEditMode;
@property(nonatomic) _Bool isLibraryFace; // @synthesize isLibraryFace=_isLibraryFace;
@property(readonly, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
@property(readonly, nonatomic) NTKFaceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) int faceStyle; // @synthesize faceStyle=_faceStyle;
// - (void).cxx_destruct;
- (void)_selectDefaultSlots;
- (id)_sortedComplicationSlots;
- (_Bool)_verifyCompatibilityOfConfiguration:(id)arg1;
- (_Bool)_applyConfiguration:(id)arg1 allowFailure:(_Bool)arg2;
- (Class)editOptionClassFromEditMode:(int)arg1;
- (void)restrictedApplicationsDidChange;
- (id)JSONObjectRepresentation;
- (id)_configurationFromOldEncodingWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_resourceDirectorySnapshotKey;
- (id)_defaultName;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)_orderedComplicationSlots;
- (Class)_optionClassForCustomEditMode:(int)arg1;
- (_Bool)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (void)_prepareForDeletion;
- (void)_performCustomSwitcherSelectionAction;
- (_Bool)_hasCustomSwitcherSelectionAction;
- (void)didMoveToLibrary;
- (_Bool)_allowsEditing;
- (_Bool)_option:(id)arg1 migratesToValidOption:(id *)arg2 forCustomEditMode:(int)arg3;
- (_Bool)_option:(id)arg1 isValidForCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_noteOptionChangedFrom:(id)arg1 to:(id)arg2 forCustomEditMode:(int)arg3 slot:(id)arg4;
- (_Bool)_hasOptionsForCustomEditMode:(int)arg1;
- (unsigned int)_indexOfOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned int)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (unsigned int)_numberOfOptionsForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_cleanupEditOptions;
- (void)_prepareEditOptions;
- (id)_defaultComplicationOfType:(unsigned int)arg1 forSlot:(id)arg2;
- (id)displayNameForComplicationSlot:(id)arg1;
- (id)orderedComplicationSlots;
- (_Bool)isEquivalentToFace:(id)arg1;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (void)prepareForDeletion;
- (id)slotsForCustomEditMode:(int)arg1;
- (void)enumerateSlotsForCustomEditMode:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCustomEditModesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)indexOfOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (id)optionAtIndex:(unsigned int)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (unsigned int)numberOfOptionsForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)cleanupEditOptions;
- (void)prepareEditOptions;
- (void)applyUniqueConfigurationWithExistingFaces:(id)arg1;
- (void)applyDefaultComplicationConfiguration;
- (void)applyDefaultConfiguration;
- (_Bool)applyConfiguration:(id)arg1;
- (void)setSelectedSlot:(id)arg1 forEditMode:(int)arg2;
- (id)selectedSlotForEditMode:(int)arg1;
@property(readonly, nonatomic, getter=isSingular) _Bool singular;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
@property(readonly, nonatomic) int editModeForCustomEditViewController;
@property(readonly, nonatomic) NSArray *editModes;
- (void)performCustomSwitcherSelectionAction;
- (_Bool)hasCustomSwitcherSelectionAction;
- (void)_updateComplicationTombstones;
- (_Bool)hasComplicationsOfType:(unsigned int)arg1 forSlot:(id)arg2;
- (id)_allowedComplicationsOfType:(unsigned int)arg1 forSlot:(id)arg2;
- (void)clearComplicationTombstones;
- (id)allowedComplicationsForSlot:(id)arg1 includingComplication:(id)arg2;
- (id)allowedComplicationsForSlot:(id)arg1;
- (unsigned int)allowedComplicationTypesForSlot:(id)arg1;
- (int)complicationFamilyForSlot:(id)arg1;
- (void)enumerateComplicationSlotsWithBlock:(CDUnknownBlockType)arg1;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (id)complicationForSlot:(id)arg1;
- (id)editOptionsForCustomEditModes;
- (id)namesOfSelectedOptionsForCustomEditModes;
- (id)nameOfSelectedOptionForCustomEditMode:(int)arg1;
- (id)selectedOptionsForCustomEditModes;
- (void)selectOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (id)selectedOptionForCustomEditMode:(int)arg1 slot:(id)arg2;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *unadornedSnapshotKey;
- (_Bool)_wantsUnadornedSnapshot;
@property(readonly, nonatomic) _Bool wantsUnadornedSnapshot;
- (_Bool)_complication:(id)arg1 appearsInDailySnapshotForSlot:(id)arg2;
@property(readonly, nonatomic) NSString *dailySnapshotKey;
- (void)_notifyObserversOptionsDidChangeForEditMode:(int)arg1;
- (void)_notifyObserversFaceConfigurationDidChange;
- (void)_updateForResourceDirectoryChange;
- (void)_setResourceDirectory:(id)arg1;
- (void)_deleteResourceDirectoryHardLinkIfNecessary;
- (void)setResourceDirectoryByHardLinkingDirectory:(id)arg1;
- (void)setResourceDirectory:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)_complicationMigrationPaths;
- (int)_editModeForOldEncodingIndex:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
