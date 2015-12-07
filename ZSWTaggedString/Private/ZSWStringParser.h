//
//  ZSWStringParser.h
//  Pods
//
//  Created by Zachary West on 2015-02-21.
//
//

/*!
 * @private
 */

#import <ZSWTaggedString/ZSWTaggedString.h>
#import <ZSWTaggedString/ZSWTaggedStringOptions.h>
#import <ZSWTaggedString/ZSWTaggedStringAttribute.h>

#define ZSWSelector(selectorName) (NSStringFromSelector(@selector(selectorName)))

NS_ASSUME_NONNULL_BEGIN

@interface ZSWStringParser : NSObject

+ (nullable id)stringWithTaggedString:(ZSWTaggedString *)taggedString
                              options:(ZSWTaggedStringOptions *)options
                          returnClass:(Class)returnClass
                                error:(NSError **)error;

@end

@interface ZSWTaggedString()
@property (nonatomic, copy) NSString *underlyingString;
@end

@interface ZSWTaggedStringOptions()
+ (ZSWTaggedStringOptions *)defaultOptionsNoCopy;

@property (nonatomic) NSDictionary<NSString *, ZSWTaggedStringAttribute *> *tagToAttributesMap;
- (void)updateAttributedString:(NSMutableAttributedString *)string
               updatedWithTags:(NSArray *)tags;
@end

NS_ASSUME_NONNULL_END
