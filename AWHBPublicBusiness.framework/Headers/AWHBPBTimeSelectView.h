//
//  AWHBPBTimeSelectView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import "AWHBPBListSiftCollectionViewCell.h"
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTimeSelectView : UIView
@property (assign,nonatomic) NSInteger seletedRow;

@property (nonatomic,copy)void (^doneDidTouch)(NSInteger index,NSString *zcode);
@property (nonatomic, strong) NSArray *dataArray;
@property (nonatomic, strong) NSArray *titleArray;
@property (nonatomic,strong)UICollectionView *collectioinView;
@end

NS_ASSUME_NONNULL_END
