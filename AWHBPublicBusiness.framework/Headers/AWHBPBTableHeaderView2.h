//
//  AWHBPBTableHeaderView2.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^SelectBtn)(UIButton *button);
@interface AWHBPBTableHeaderView2 : UITableViewHeaderFooterView
@property(nonatomic,strong)UILabel *numLabel;
@property(nonatomic, copy)SelectBtn SelectBtn;
@property(nonatomic, strong)UIButton *button;
@property(nonatomic, strong)UIImageView *pzImageView;
@property(nonatomic, strong)UIImageView *pzImageView2;
@end

NS_ASSUME_NONNULL_END
