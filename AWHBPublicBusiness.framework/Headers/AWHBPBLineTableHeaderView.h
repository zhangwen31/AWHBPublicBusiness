//
//  AWHBPBLineTableHeaderView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/3/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBLineSelectBtn)(UIButton *button);
typedef void(^AWHBPBLineSelectBtn2)(UIButton *button);
@interface AWHBPBLineTableHeaderView : UITableViewHeaderFooterView
@property(nonatomic,strong)UILabel *numLabel;
@property(nonatomic, copy)AWHBPBLineSelectBtn SelectBtn;
@property(nonatomic, copy)AWHBPBLineSelectBtn2 SelectBtn2;
@property(nonatomic, strong)UIButton *button;
@property(nonatomic, strong)UIButton *button2;
@property(nonatomic, strong)UIImageView *pzImageView;
@end

NS_ASSUME_NONNULL_END
