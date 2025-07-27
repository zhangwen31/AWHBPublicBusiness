//
//  AWHBPBTitleSelectView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/1/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTitleSelectView : UIView

@property (nonatomic, strong) NSArray<NSString *> *titleArray;

@property (nonatomic, copy) void (^selectTitleBlock)(NSString *title, NSInteger index);

@end

NS_ASSUME_NONNULL_END
