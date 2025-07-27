//
//  AWHBPBDescriptionInputChangeCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDescriptionInputChangeCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)AWHBRTextView *detailText;
@property(nonatomic,strong)UIView *line;
@property(nonatomic,strong)UIImageView *pImageView;
@property (nonatomic, assign) BOOL isHiddenLine;
/**
 是否放大
 */
@property (nonatomic, assign) BOOL isEnlarge;

@property (nonatomic,copy) void (^changeAddHeight)(CGFloat height);
@property (nonatomic, copy) void (^changeFinishTextView)(void);

@end

NS_ASSUME_NONNULL_END
