//
//  CocoVContentComponet.h
//  WildeGuess
//
//  Created by didi on 2018/4/12.
//

#import <ComponentKit/ComponentKit.h>
#import "CocoModel.h"
@interface CocoVContentComponet : CKCompositeComponent
+(instancetype)newWithModel:(CocoModel *)model context:(id<NSObject>)context;
@end
