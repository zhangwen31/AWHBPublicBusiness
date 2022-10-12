//
//  AWHBPBSingleCarBtnFunction.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>
typedef void(^RerurnSingleCarFunctionBlock)(NSString * _Nullable string,UIButton * _Nullable button);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSingleCarBtnFunction : UIView
/** */
@property(nonatomic,copy)RerurnSingleCarFunctionBlock RerurnSingleCarFunctionBlock;
@end

NS_ASSUME_NONNULL_END
