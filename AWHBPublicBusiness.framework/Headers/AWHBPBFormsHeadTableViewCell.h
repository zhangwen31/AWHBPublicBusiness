//
//  AWHBPBFormsHeadTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBFormsHeadTableViewCell : UITableViewCell
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UILabel *detailLab;
@property(nonatomic,strong)UITextField *detailText;
@property(nonatomic,strong)UIView *line;
@property(nonatomic,strong)UIImageView *pImageView;
@property (nonatomic, assign) BOOL isHiddenLine;
@property(nonatomic,assign)NSUInteger maxLength;
//是否不能包含表情符
@property(nonatomic,assign)BOOL isNoIncludeEmoticons;
@end

NS_ASSUME_NONNULL_END
