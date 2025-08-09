//
//  AWHBPBListFunctionNewView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBPBReturnListFunctionCellName)(NSString *name);
@interface AWHBPBListFunctionNewView : UIView

@property(nonatomic,copy)AWHBPBReturnListFunctionCellName ReturnListFunctionCellName;

@end

NS_ASSUME_NONNULL_END
