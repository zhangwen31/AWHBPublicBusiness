//
//  AWHBPBTableHeaderView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^SelectBtn)(UIButton *button);
typedef void(^SelectBtn2)(UIButton *button);
@interface AWHBPBTableHeaderView : UITableViewHeaderFooterView
@property(nonatomic,strong)UILabel *numLabel;
@property(nonatomic, copy)SelectBtn SelectBtn;
@property(nonatomic, copy)SelectBtn2 SelectBtn2;
@property(nonatomic, strong)UIButton *button;
@property(nonatomic, strong)UIButton *button2;
@property(nonatomic, strong)UIImageView *pzImageView;
@end

NS_ASSUME_NONNULL_END
