jQuery(function($) {
  $('.group-title-description').each(function(){
      $scope = $(this);
      $('.field-name-field-description', $scope).hide();
      $('.field-name-field-titre', $scope).addClass('description-hidden');
      (function($scope){
          $('.field-name-field-titre', $scope).click(function(){
              $('.field-name-field-description', $scope).slideToggle();
              $('.field-name-field-titre', $scope).toggleClass('description-hidden');
              $('.field-name-field-titre', $scope).toggleClass('description-show');
          });
      })($scope);
  });
});