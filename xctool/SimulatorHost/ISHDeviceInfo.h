//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface ISHDeviceInfo : NSObject
{
    BOOL _canTether;
    BOOL _invertX;
    BOOL _invertY;
    BOOL _transformedTouch;
    BOOL _rotateScreen180;
    BOOL _lp64;
    unsigned int _minimumVersion;
    unsigned int _maximumVersion;
    int _productType;
    NSString *_identifier;
    NSString *_displayName;
    double _scale;
    NSString *_productFamily;
    NSString *_bundlePath;
    NSString *_capabilitiesPlist;
    long long _priority;
    NSString *_chromeImageName;
    NSImage *_chromeImage;
    NSString *_homeImageName;
    NSImage *_homeImage;
    NSString *_chromeImageNameDoubled;
    NSImage *_chromeImageDoubled;
    NSString *_homeImageNameDoubled;
    NSImage *_homeImageDoubled;
    NSString *_productClass;
    NSString *_deviceBundle;
    NSString *_devicePitch;
    NSString *_executablePath;
    NSString *_olderEquivalentName;
    NSString *_newerEquivalentName;
    NSArray *_additionalArguments;
    NSDictionary *_additionalEnvironment;
    struct CGSize _size;
    struct CGSize _forceSize;
    struct CGPoint _homeOrigin;
    struct CGPoint _homeOriginDoubled;
}

+ (id)device;
+ (id)deviceWithPath:(id)arg1;
@property(copy) NSArray *additionalArguments; // @synthesize additionalArguments=_additionalArguments;
@property(copy) NSDictionary *additionalEnvironment; // @synthesize additionalEnvironment=_additionalEnvironment;
@property(readonly) NSString *architecture;
@property(copy) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property BOOL canTether; // @synthesize canTether=_canTether;
@property(copy) NSString *capabilitiesPlist; // @synthesize capabilitiesPlist=_capabilitiesPlist;
@property(retain, nonatomic) NSImage *chromeImage; // @synthesize chromeImage=_chromeImage;
@property(retain, nonatomic) NSImage *chromeImageDoubled; // @synthesize chromeImageDoubled=_chromeImageDoubled;
@property(copy) NSString *chromeImageName; // @synthesize chromeImageName=_chromeImageName;
@property(copy) NSString *chromeImageNameDoubled; // @synthesize chromeImageNameDoubled=_chromeImageNameDoubled;
- (void)dealloc;
@property(readonly) NSString *description;
@property(copy) NSString *deviceBundle; // @synthesize deviceBundle=_deviceBundle;
@property(copy) NSString *devicePitch; // @synthesize devicePitch=_devicePitch;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) double dotPitch;
@property(copy) NSString *executablePath; // @synthesize executablePath=_executablePath;
- (struct CGPoint)forceOrigin;
@property struct CGSize forceSize; // @synthesize forceSize=_forceSize;
@property(retain, nonatomic) NSImage *homeImage; // @synthesize homeImage=_homeImage;
@property(retain, nonatomic) NSImage *homeImageDoubled; // @synthesize homeImageDoubled=_homeImageDoubled;
@property(copy) NSString *homeImageName; // @synthesize homeImageName=_homeImageName;
@property(copy) NSString *homeImageNameDoubled; // @synthesize homeImageNameDoubled=_homeImageNameDoubled;
@property struct CGPoint homeOrigin; // @synthesize homeOrigin=_homeOrigin;
@property struct CGPoint homeOriginDoubled; // @synthesize homeOriginDoubled=_homeOriginDoubled;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)imageWithName:(id)arg1;
- (id)init;
@property BOOL invertX; // @synthesize invertX=_invertX;
@property BOOL invertY; // @synthesize invertY=_invertY;
- (BOOL)isForcingSize;
@property BOOL lp64; // @synthesize lp64=_lp64;
@property(readonly) NSString *maximumSDK;
@property unsigned int maximumVersion; // @synthesize maximumVersion=_maximumVersion;
@property(readonly) NSString *minimumSDK;
@property unsigned int minimumVersion; // @synthesize minimumVersion=_minimumVersion;
- (id)newerEquivalent;
@property(copy) NSString *newerEquivalentName; // @synthesize newerEquivalentName=_newerEquivalentName;
- (id)olderEquivalent;
@property(copy) NSString *olderEquivalentName; // @synthesize olderEquivalentName=_olderEquivalentName;
- (double)pointHeight;
@property long long priority; // @synthesize priority=_priority;
- (long long)priorityCompare:(id)arg1;
@property(copy) NSString *productClass; // @synthesize productClass=_productClass;
@property(copy) NSString *productFamily; // @synthesize productFamily=_productFamily;
@property int productType; // @synthesize productType=_productType;
@property BOOL rotateScreen180; // @synthesize rotateScreen180=_rotateScreen180;
@property double scale; // @synthesize scale=_scale;
@property struct CGSize size; // @synthesize size=_size;
@property BOOL transformedTouch; // @synthesize transformedTouch=_transformedTouch;
@property(readonly) NSSet *supportedArchitectures;
- (BOOL)supportsSDK:(id)arg1;

@end

