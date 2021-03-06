//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class EAGLContext, NSBundle, NSMutableArray, NSMutableDictionary;

@interface NTKCharacterResourceLoader : NSObject
{
    EAGLContext *_context;
    NSBundle *_bundle;
    unsigned int _clients;
    struct NUMemFile _commonBankLatn;
    struct NUMemFile _commonBankArab;
    struct NUMemFile _minnieBank;
    struct NUMemFile _mickeyBank;
    struct NTKCharacterPrograms _programs;
    NSMutableDictionary *_mapping;
    NSMutableArray *_array;
    NSMutableArray *_arrayByLocale[2];
}

+ (void)_deallocInstance;
+ (id)sharedInstance;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (unsigned int)programUniformLocation:(unsigned int)arg1 uniform:(int)arg2;
- (void)bindProgram:(unsigned int)arg1;
- (void)bindTexture:(id)arg1;
- (id)textureWithName:(id)arg1;
- (id)textureWithName:(id)arg1 prefix:(id)arg2;
- (void)_loadTextures;
- (void)localeChanged;
- (struct NUMemFile)_loadBank:(id)arg1 toArrays:(unsigned int)arg2 allowNewKeys:(_Bool)arg3;
- (void)_loadPrograms;
- (void)removeClient;
- (void)addClient;
- (void)prime;
- (void)_asyncDeallocInstance;
- (void)dealloc;
- (id)init;

@end

