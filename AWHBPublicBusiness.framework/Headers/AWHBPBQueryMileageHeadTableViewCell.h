//
//  AWHBPBQueryMileageHeadTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnTextFieldTextBlock)(NSString *textFieldText);
@interface AWHBPBQueryMileageHeadTableViewCell : UITableViewCell
@property (nonatomic, strong) UIView *backView;
@property(nonatomic,strong)UILabel *titleTextLab;
@property(nonatomic,strong)UILabel *detailTextLab;
@property(nonatomic,strong)UIImageView *pimageView;
@property(nonatomic,strong)UITextField *userOperationTextField;//操作用户
@property (nonatomic, assign) BOOL isHiddenLine;
/** */
@property(nonatomic,copy)ReturnTextFieldTextBlock ReturnTextFieldTextBlock;
@end

NS_ASSUME_NONNULL_END
