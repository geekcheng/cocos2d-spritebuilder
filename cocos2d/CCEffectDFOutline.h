//
//  CCEffectDFOutline.h
//  cocos2d-ios
//
//  Created by Oleg Osin on 8/29/14.
//
//

#import "CCEffect.h"

/**
 * CCEffectDFOutline create an outline around a sprite (combined with a distance field).
 *
 */
#if CC_EFFECTS_EXPERIMENTAL

@interface CCEffectDFOutline : CCEffect

/// -----------------------------------------------------------------------
/// @name Accessing Effect Attributes
/// -----------------------------------------------------------------------

/** Color of the sprite (pass a fillColor with with alpha value of 0.0 to see the actual sprite) */
@property (nonatomic, strong) CCColor* fillColor;

/** Color of the outline */
@property (nonatomic, strong) CCColor* outlineColor;

/** Outline width pixel width of the outline */
@property (nonatomic) int outlineWidth;

// Distance Field, generated by SDFGen (https://github.com/osinoleg/SDFGen)
@property (nonatomic, strong) CCTexture* distanceField;

/// -----------------------------------------------------------------------
/// @name Initializing a CCEffectDFOutline object
/// -----------------------------------------------------------------------

/**
 *  Initializes a CCEffectDFOutline.
 *
 *  @return The CCEffectDFOutline object.
 */
-(id)init;

/**
 *  Initializes a CCEffectDFOutline object with the supplied parameters.
 *
 *  @param outlineColor Color of the outline, a [CCColor blackColor] will result in an opaque black outline.
 *  @param fillColor Color of the fillColor, a [CCColor blackColor] will result in an opaque black fillColor.
 *  @param outlineWidth pixel width of the outline.
 *  @param fieldScale defined by the distance field generation proccess, for example a distance field that
 *  was generated with a 4096/4096 input and output a 128/128 texture would have a fieldScale of 32 (
 *  input size / output size). Note: this parameter could be automatically calculated if we assume that all 
 *  distance fields are generated from a 4096 input.
 *  @param distanceField Distance field texture.
 *
 *  @return The CCEffectDFOutline object.
 */
-(id)initWithOutlineColor:(CCColor*)outlineColor fillColor:(CCColor*)fillColor outlineWidth:(int)outlineWidth fieldScale:(float)fieldScale distanceField:(CCTexture*)distanceField;


/// -----------------------------------------------------------------------
/// @name Creating a CCEffectDFOutline object
/// -----------------------------------------------------------------------

/**
 *  Initializes a CCEffectDFOutline object with the supplied parameters.
 *
 *  @param outlineColor Color of the outline, a [CCColor blackColor] will result in an opaque black outline.
 *  @param fillColor Color of the fillColor, a [CCColor blackColor] will result in an opaque black fillColor.
 *  @param outlineWidth pixel width of the outline.
 *  @param fieldScale defined by the distance field generation proccess, for example a distance field that
 *  was generated with a 4096/4096 input and output a 128/128 texture would have a fieldScale of 32 (
 *  input size / output size). Note: this parameter could be automatically calculated if we assume that all
 *  distance fields are generated from a 4096 input.
 *  @param distanceField Distance field texture.
 *
 *  @return The CCEffectDFOutline object.
 */
+(id)effectWithOutlineColor:(CCColor*)outlineColor fillColor:(CCColor*)fillColor outlineWidth:(int)outlineWidth fieldScale:(float)fieldScale distanceField:(CCTexture*)distanceField;

@end

#endif
