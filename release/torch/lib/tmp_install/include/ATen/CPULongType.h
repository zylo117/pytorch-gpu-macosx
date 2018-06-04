// @generated
#pragma once
#include "ATen/Type.h"
#include "ATen/Context.h"
#include "ATen/TensorMethods.h"
#include "ATen/CheckGenerator.h"

#ifdef _MSC_VER
#ifdef Type
#undef Type
#endif
#endif

namespace at {

struct CPULongType final : public Type {
  explicit CPULongType(Context* context);
  virtual ScalarType scalarType() const override;
  virtual Backend backend() const override;
  virtual bool is_cuda() const override;
  virtual bool is_sparse() const override;
  virtual bool is_distributed() const override;
  virtual std::unique_ptr<Storage> storage() const override;
  virtual std::unique_ptr<Storage> storage(size_t size) const override;
  virtual std::unique_ptr<Storage> storageFromBlob(void * data, int64_t size, const std::function<void(void*)> & deleter) const override;
  virtual std::unique_ptr<Storage> storageWithAllocator(int64_t size, std::unique_ptr<Allocator> allocator) const override;
  virtual std::unique_ptr<Generator> generator() const override;
  virtual const char * toString() const override;
  virtual std::size_t elementSizeInBytes() const override;
  virtual TypeID ID() const override;
  static const char * typeString();
  virtual std::unique_ptr<Storage> unsafeStorageFromTH(void * th_pointer, bool retain) const override;
  virtual Tensor unsafeTensorFromTH(void * th_pointer, bool retain) const override;

  // example
  // virtual Tensor * add(Tensor & a, Tensor & b) override;

  virtual Tensor & s_copy_(Tensor & self, const Tensor & src, bool non_blocking) const override;
  virtual Tensor & _s_copy_from(const Tensor & self, Tensor & dst, bool non_blocking) const override;
  virtual int64_t storage_offset(const Tensor & self) const override;
  virtual Tensor & resize_(Tensor & self, IntList size) const override;
  virtual int64_t numel(const Tensor & self) const override;
  virtual Tensor & set_(Tensor & self, Storage & storage) const override;
  virtual Tensor & set_(Tensor & self, Storage & sourceStorage, int64_t storage_offset, IntList size, IntList stride) const override;
  virtual Tensor & set_(Tensor & self, const Tensor & source) const override;
  virtual Tensor & set_(Tensor & self) const override;
  virtual Tensor & _fill_(Tensor & self, Scalar value) const override;
  virtual Tensor & _fill_(Tensor & self, const Tensor & value) const override;
  virtual bool is_contiguous(const Tensor & self) const override;
  virtual bool is_set_to(const Tensor & self, const Tensor & tensor) const override;
  virtual Tensor & s_masked_fill_(Tensor & self, const Tensor & mask, Scalar value) const override;
  virtual Tensor & s_masked_fill_(Tensor & self, const Tensor & mask, const Tensor & value) const override;
  virtual Tensor & s_masked_scatter_(Tensor & self, const Tensor & mask, const Tensor & source) const override;
  virtual Tensor & s_masked_select_out(Tensor & result, const Tensor & self, const Tensor & mask) const override;
  virtual Tensor s_masked_select(const Tensor & self, const Tensor & mask) const override;
  virtual Tensor & nonzero_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor nonzero(const Tensor & self) const override;
  virtual Tensor contiguous(const Tensor & self) const override;
  virtual Tensor clone(const Tensor & self) const override;
  virtual Tensor view(const Tensor & self, IntList size) const override;
  virtual Tensor & resize_as_(Tensor & self, const Tensor & the_template) const override;
  virtual Tensor & index_select_out(Tensor & result, const Tensor & self, int64_t dim, const Tensor & index) const override;
  virtual Tensor index_select(const Tensor & self, int64_t dim, const Tensor & index) const override;
  virtual Tensor & _indexCopy_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & source) const override;
  virtual Tensor & take_out(Tensor & result, const Tensor & self, const Tensor & index) const override;
  virtual Tensor take(const Tensor & self, const Tensor & index) const override;
  virtual Tensor & put_(Tensor & self, const Tensor & index, const Tensor & source, bool accumulate) const override;
  virtual Tensor & index_add_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & source) const override;
  virtual Tensor & index_fill_(Tensor & self, int64_t dim, const Tensor & index, Scalar value) const override;
  virtual Tensor & index_fill_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & value) const override;
  virtual Tensor unfold(const Tensor & self, int64_t dimension, int64_t size, int64_t step) const override;
  virtual Tensor & _range_out(Tensor & result, Scalar start, Scalar end, Scalar step) const override;
  virtual Tensor _range(Scalar start, Scalar end, Scalar step) const override;
  virtual Tensor & _arange_out(Tensor & result, Scalar start, Scalar end, Scalar step) const override;
  virtual Tensor _arange(Scalar start, Scalar end, Scalar step) const override;
  virtual Tensor & _arange_out(Tensor & result, Scalar end) const override;
  virtual Tensor _arange(Scalar end) const override;
  virtual Tensor & scatter_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & src) const override;
  virtual Tensor & scatter_(Tensor & self, int64_t dim, const Tensor & index, Scalar value) const override;
  virtual Tensor & scatter_add_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & src) const override;
  virtual Tensor & gather_out(Tensor & result, const Tensor & self, int64_t dim, const Tensor & index) const override;
  virtual Tensor gather(const Tensor & self, int64_t dim, const Tensor & index) const override;
  virtual void* data_ptr(const Tensor & self) const override;
  virtual bool equal(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & __and___out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor __and__(const Tensor & self, Scalar other) const override;
  virtual Tensor & s___and___out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s___and__(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & __iand__(Tensor & self, Scalar other) const override;
  virtual Tensor & s___iand__(Tensor & self, const Tensor & other) const override;
  virtual Tensor & __or___out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor __or__(const Tensor & self, Scalar other) const override;
  virtual Tensor & s___or___out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s___or__(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & __ior__(Tensor & self, Scalar other) const override;
  virtual Tensor & s___ior__(Tensor & self, const Tensor & other) const override;
  virtual Tensor & __xor___out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor __xor__(const Tensor & self, Scalar other) const override;
  virtual Tensor & s___xor___out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s___xor__(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & __ixor__(Tensor & self, Scalar other) const override;
  virtual Tensor & s___ixor__(Tensor & self, const Tensor & other) const override;
  virtual Tensor & __lshift___out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor __lshift__(const Tensor & self, Scalar other) const override;
  virtual Tensor & s___lshift___out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s___lshift__(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & __ilshift__(Tensor & self, Scalar other) const override;
  virtual Tensor & s___ilshift__(Tensor & self, const Tensor & other) const override;
  virtual Tensor & __rshift___out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor __rshift__(const Tensor & self, Scalar other) const override;
  virtual Tensor & s___rshift___out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s___rshift__(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & __irshift__(Tensor & self, Scalar other) const override;
  virtual Tensor & s___irshift__(Tensor & self, const Tensor & other) const override;
  virtual Tensor & lt_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor lt(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_lt_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_lt(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & lt_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_lt_(Tensor & self, const Tensor & other) const override;
  virtual Tensor & gt_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor gt(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_gt_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_gt(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & gt_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_gt_(Tensor & self, const Tensor & other) const override;
  virtual Tensor & le_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor le(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_le_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_le(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & le_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_le_(Tensor & self, const Tensor & other) const override;
  virtual Tensor & ge_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor ge(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_ge_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_ge(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & ge_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_ge_(Tensor & self, const Tensor & other) const override;
  virtual Tensor & eq_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor eq(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_eq_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_eq(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & eq_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_eq_(Tensor & self, const Tensor & other) const override;
  virtual Tensor & ne_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor ne(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_ne_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_ne(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & ne_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_ne_(Tensor & self, const Tensor & other) const override;
  virtual std::tuple<Tensor &,Tensor &> min_out(Tensor & min, Tensor & min_indices, const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual std::tuple<Tensor,Tensor> min(const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual Tensor & s_min_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_min(const Tensor & self, const Tensor & other) const override;
  virtual Tensor min(const Tensor & self) const override;
  virtual std::tuple<Tensor &,Tensor &> max_out(Tensor & max, Tensor & max_indices, const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual std::tuple<Tensor,Tensor> max(const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual Tensor & s_max_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_max(const Tensor & self, const Tensor & other) const override;
  virtual Tensor max(const Tensor & self) const override;
  virtual std::tuple<Tensor &,Tensor &> kthvalue_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t k, int64_t dim, bool keepdim) const override;
  virtual std::tuple<Tensor,Tensor> kthvalue(const Tensor & self, int64_t k, int64_t dim, bool keepdim) const override;
  virtual std::tuple<Tensor &,Tensor &> mode_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual std::tuple<Tensor,Tensor> mode(const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual std::tuple<Tensor &,Tensor &> median_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual std::tuple<Tensor,Tensor> median(const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual Tensor median(const Tensor & self) const override;
  virtual std::tuple<Tensor &,Tensor &> sort_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t dim, bool descending) const override;
  virtual std::tuple<Tensor,Tensor> sort(const Tensor & self, int64_t dim, bool descending) const override;
  virtual std::tuple<Tensor &,Tensor &> topk_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t k, int64_t dim, bool largest, bool sorted) const override;
  virtual std::tuple<Tensor,Tensor> topk(const Tensor & self, int64_t k, int64_t dim, bool largest, bool sorted) const override;
  virtual Tensor & neg_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor neg(const Tensor & self) const override;
  virtual Tensor & neg_(Tensor & self) const override;
  virtual Tensor & pow_out(Tensor & result, const Tensor & self, Scalar exponent) const override;
  virtual Tensor pow(const Tensor & self, Scalar exponent) const override;
  virtual Tensor & s_pow_out(Tensor & result, const Tensor & self, const Tensor & exponent) const override;
  virtual Tensor s_pow(const Tensor & self, const Tensor & exponent) const override;
  virtual Tensor & pow_out(Tensor & result, Scalar base, const Tensor & self) const override;
  virtual Tensor pow(Scalar base, const Tensor & self) const override;
  virtual Tensor & pow_(Tensor & self, Scalar exponent) const override;
  virtual Tensor & s_pow_(Tensor & self, const Tensor & exponent) const override;
  virtual Tensor & zero_(Tensor & self) const override;
  virtual Tensor _sumall(const Tensor & self) const override;
  virtual Tensor & _th_sum_out(Tensor & result, const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual Tensor _th_sum(const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual Tensor _prodall(const Tensor & self) const override;
  virtual Tensor & _th_prod_out(Tensor & result, const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual Tensor _th_prod(const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual Tensor & _cumsum_out(Tensor & result, const Tensor & self, int64_t dim) const override;
  virtual Tensor _cumsum(const Tensor & self, int64_t dim) const override;
  virtual Tensor & _cumprod_out(Tensor & result, const Tensor & self, int64_t dim) const override;
  virtual Tensor _cumprod(const Tensor & self, int64_t dim) const override;
  virtual Tensor & sign_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor sign(const Tensor & self) const override;
  virtual Tensor & sign_(Tensor & self) const override;
  virtual Tensor trace(const Tensor & self) const override;
  virtual Tensor & add_out(Tensor & result, const Tensor & self, Scalar other, Scalar alpha) const override;
  virtual Tensor add(const Tensor & self, Scalar other, Scalar alpha) const override;
  virtual Tensor & s_add_out(Tensor & result, const Tensor & self, const Tensor & other, Scalar alpha) const override;
  virtual Tensor s_add(const Tensor & self, const Tensor & other, Scalar alpha) const override;
  virtual Tensor & add_out(Tensor & result, const Tensor & self, SparseTensor other, Scalar alpha) const override;
  virtual Tensor add(const Tensor & self, SparseTensor other, Scalar alpha) const override;
  virtual Tensor & add_(Tensor & self, Scalar other, Scalar alpha) const override;
  virtual Tensor & s_add_(Tensor & self, const Tensor & other, Scalar alpha) const override;
  virtual Tensor & add_(Tensor & self, SparseTensor other, Scalar alpha) const override;
  virtual Tensor & sub_out(Tensor & result, const Tensor & self, Scalar other, Scalar alpha) const override;
  virtual Tensor sub(const Tensor & self, Scalar other, Scalar alpha) const override;
  virtual Tensor & s_sub_out(Tensor & result, const Tensor & self, const Tensor & other, Scalar alpha) const override;
  virtual Tensor s_sub(const Tensor & self, const Tensor & other, Scalar alpha) const override;
  virtual Tensor & sub_(Tensor & self, Scalar other, Scalar alpha) const override;
  virtual Tensor & s_sub_(Tensor & self, const Tensor & other, Scalar alpha) const override;
  virtual Tensor & mul_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor mul(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_mul_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_mul(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & mul_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_mul_(Tensor & self, const Tensor & other) const override;
  virtual Tensor & div_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor div(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_div_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_div(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & div_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_div_(Tensor & self, const Tensor & other) const override;
  virtual Tensor & fmod_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor fmod(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_fmod_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_fmod(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & fmod_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_fmod_(Tensor & self, const Tensor & other) const override;
  virtual Tensor & remainder_out(Tensor & result, const Tensor & self, Scalar other) const override;
  virtual Tensor remainder(const Tensor & self, Scalar other) const override;
  virtual Tensor & s_remainder_out(Tensor & result, const Tensor & self, const Tensor & other) const override;
  virtual Tensor s_remainder(const Tensor & self, const Tensor & other) const override;
  virtual Tensor & remainder_(Tensor & self, Scalar other) const override;
  virtual Tensor & s_remainder_(Tensor & self, const Tensor & other) const override;
  virtual Tensor & clamp_out(Tensor & result, const Tensor & self, Scalar min, Scalar max) const override;
  virtual Tensor clamp(const Tensor & self, Scalar min, Scalar max) const override;
  virtual Tensor & clamp_(Tensor & self, Scalar min, Scalar max) const override;
  virtual Tensor & clamp_min_out(Tensor & result, const Tensor & self, Scalar min) const override;
  virtual Tensor clamp_min(const Tensor & self, Scalar min) const override;
  virtual Tensor & clamp_min_(Tensor & self, Scalar min) const override;
  virtual Tensor & clamp_max_out(Tensor & result, const Tensor & self, Scalar max) const override;
  virtual Tensor clamp_max(const Tensor & self, Scalar max) const override;
  virtual Tensor & clamp_max_(Tensor & self, Scalar max) const override;
  virtual Tensor _dot(const Tensor & self, const Tensor & tensor) const override;
  virtual Tensor & tril_out(Tensor & result, const Tensor & self, int64_t diagonal) const override;
  virtual Tensor tril(const Tensor & self, int64_t diagonal) const override;
  virtual Tensor & tril_(Tensor & self, int64_t diagonal) const override;
  virtual Tensor & triu_out(Tensor & result, const Tensor & self, int64_t diagonal) const override;
  virtual Tensor triu(const Tensor & self, int64_t diagonal) const override;
  virtual Tensor & triu_(Tensor & self, int64_t diagonal) const override;
  virtual Tensor & cross_out(Tensor & result, const Tensor & self, const Tensor & other, int64_t dim) const override;
  virtual Tensor cross(const Tensor & self, const Tensor & other, int64_t dim) const override;
  virtual Tensor & diag_out(Tensor & result, const Tensor & self, int64_t diagonal) const override;
  virtual Tensor diag(const Tensor & self, int64_t diagonal) const override;
  virtual Tensor & s_addmm_out(Tensor & result, const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha) const override;
  virtual Tensor s_addmm(const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & addmm_out(Tensor & result, const Tensor & self, SparseTensor mat1, const Tensor & mat2, Scalar beta, Scalar alpha) const override;
  virtual Tensor addmm(const Tensor & self, SparseTensor mat1, const Tensor & mat2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & addmm_(Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & addmm_(Tensor & self, SparseTensor mat1, const Tensor & mat2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & s__addmv_out(Tensor & result, const Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha) const override;
  virtual Tensor s__addmv(const Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha) const override;
  virtual Tensor & _addmv_(Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha) const override;
  virtual Tensor & s__addr_out(Tensor & result, const Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha) const override;
  virtual Tensor s__addr(const Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & _addr_(Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & _ger_out(Tensor & result, const Tensor & self, const Tensor & vec2) const override;
  virtual Tensor _ger(const Tensor & self, const Tensor & vec2) const override;
  virtual Tensor & _mv_out(Tensor & result, const Tensor & self, const Tensor & vec) const override;
  virtual Tensor _mv(const Tensor & self, const Tensor & vec) const override;
  virtual Tensor & _mm_out(Tensor & result, const Tensor & self, const Tensor & mat2) const override;
  virtual Tensor _mm(const Tensor & self, const Tensor & mat2) const override;
  virtual Tensor & bmm_out(Tensor & result, const Tensor & self, const Tensor & mat2) const override;
  virtual Tensor bmm(const Tensor & self, const Tensor & mat2) const override;
  virtual Tensor & s_addbmm_out(Tensor & result, const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha) const override;
  virtual Tensor s_addbmm(const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & addbmm_(Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & s_baddbmm_out(Tensor & result, const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha) const override;
  virtual Tensor s_baddbmm(const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & baddbmm_(Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha) const override;
  virtual Tensor & s_addcmul_out(Tensor & result, const Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) const override;
  virtual Tensor s_addcmul(const Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) const override;
  virtual Tensor & s_addcmul_(Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) const override;
  virtual Tensor & s_addcdiv_out(Tensor & result, const Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) const override;
  virtual Tensor s_addcdiv(const Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) const override;
  virtual Tensor & s_addcdiv_(Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) const override;
  virtual Tensor & random_(Tensor & self, int64_t from, int64_t to, Generator * generator) const override;
  virtual Tensor & random_(Tensor & self, int64_t to, Generator * generator) const override;
  virtual Tensor & random_(Tensor & self, Generator * generator) const override;
  virtual Tensor & geometric_(Tensor & self, double p, Generator * generator) const override;
  virtual Tensor tensor(Storage & storage, int64_t storageOffset, IntList size, IntList stride) const override;
  virtual Tensor tensor(IntList size) const override;
  virtual Tensor tensor(IntList size, IntList stride) const override;
  virtual Tensor tensor() const override;
  virtual Tensor alias(const Tensor & self) const override;
  virtual Tensor & as_strided_out(Tensor & result, const Tensor & self, IntList size, IntList stride, int64_t storage_offset) const override;
  virtual Tensor as_strided(const Tensor & self, IntList size, IntList stride, int64_t storage_offset) const override;
  virtual Tensor & as_strided_(Tensor & self, IntList size, IntList stride, int64_t storage_offset) const override;
  virtual Tensor & _cat_out(Tensor & self, TensorList tensors, int64_t dim) const override;
  virtual Tensor _cat(TensorList tensors, int64_t dim) const override;
  virtual Tensor _sparse_mask(const Tensor & self, SparseTensor mask) const override;
  virtual Tensor _cudnn_rnn_flatten_weight(TensorList weight_arr, int64_t weight_stride0, int64_t input_size, int64_t mode, int64_t hidden_size, int64_t num_layers, bool batch_first, bool bidirectional) const override;
  virtual std::tuple<Tensor,Tensor,Tensor,Tensor,Tensor> _cudnn_rnn(const Tensor & input, TensorList weight, int64_t weight_stride0, const Tensor & weight_buf, const Tensor & hx, const Tensor & cx, int64_t mode, int64_t hidden_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, IntList batch_sizes, const Tensor & dropout_state) const override;
  virtual std::tuple<Tensor,Tensor,Tensor,std::vector<Tensor>> _cudnn_rnn_backward(const Tensor & input, TensorList weight, int64_t weight_stride0, const Tensor & weight_buf, const Tensor & hx, const Tensor & cx, const Tensor & output, const Tensor & grad_output, const Tensor & grad_hy, const Tensor & grad_cy, int64_t mode, int64_t hidden_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, IntList batch_sizes, const Tensor & dropout_state, const Tensor & reserve, std::array<bool,4> output_mask) const override;
  virtual Tensor _cudnn_init_dropout_state(double dropout, bool train, int64_t dropout_seed) const override;
  virtual Tensor & abs_(Tensor & self) const override;
  virtual Tensor & abs_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & acos_(Tensor & self) const override;
  virtual Tensor & acos_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & asin_(Tensor & self) const override;
  virtual Tensor & asin_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & atan_(Tensor & self) const override;
  virtual Tensor & atan_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & ceil_(Tensor & self) const override;
  virtual Tensor & ceil_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & cos_(Tensor & self) const override;
  virtual Tensor & cos_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & cosh_(Tensor & self) const override;
  virtual Tensor & cosh_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor cudnn_affine_grid_generator(const Tensor & theta, int64_t N, int64_t C, int64_t H, int64_t W) const override;
  virtual Tensor cudnn_affine_grid_generator_backward(const Tensor & grad, int64_t N, int64_t C, int64_t H, int64_t W) const override;
  virtual std::tuple<Tensor,Tensor,Tensor> cudnn_batch_norm(const Tensor & input, const Tensor & weight, const Tensor & bias, const Tensor & running_mean, const Tensor & running_var, bool training, double exponential_average_factor, double epsilon) const override;
  virtual std::tuple<Tensor,Tensor,Tensor> cudnn_batch_norm_backward(const Tensor & input, const Tensor & grad_output, const Tensor & weight, const Tensor & running_mean, const Tensor & running_var, const Tensor & save_mean, const Tensor & save_var, double epsilon) const override;
  virtual Tensor cudnn_convolution(const Tensor & self, const Tensor & weight, const Tensor & bias, IntList padding, IntList stride, IntList dilation, int64_t groups, bool benchmark, bool deterministic) const override;
  virtual Tensor cudnn_convolution_backward_input(IntList self_size, const Tensor & grad_output, const Tensor & weight, IntList padding, IntList stride, IntList dilation, int64_t groups, bool benchmark, bool deterministic) const override;
  virtual std::tuple<Tensor,Tensor,Tensor> cudnn_convolution_backward(const Tensor & self, const Tensor & grad_output, const Tensor & weight, IntList padding, IntList stride, IntList dilation, int64_t groups, bool benchmark, bool deterministic, std::array<bool,3> output_mask) const override;
  virtual Tensor cudnn_convolution_backward_bias(const Tensor & grad_output) const override;
  virtual Tensor cudnn_convolution_backward_weight(IntList weight_size, const Tensor & grad_output, const Tensor & self, IntList padding, IntList stride, IntList dilation, int64_t groups, bool benchmark, bool deterministic) const override;
  virtual Tensor cudnn_convolution_transpose(const Tensor & self, const Tensor & weight, const Tensor & bias, IntList padding, IntList output_padding, IntList stride, IntList dilation, int64_t groups, bool benchmark, bool deterministic) const override;
  virtual std::tuple<Tensor,Tensor,Tensor> cudnn_convolution_transpose_backward(const Tensor & self, const Tensor & grad_output, const Tensor & weight, IntList padding, IntList output_padding, IntList stride, IntList dilation, int64_t groups, bool benchmark, bool deterministic, std::array<bool,3> output_mask) const override;
  virtual Tensor cudnn_convolution_transpose_backward_bias(const Tensor & grad_output) const override;
  virtual Tensor cudnn_convolution_transpose_backward_input(const Tensor & grad_output, const Tensor & weight, IntList padding, IntList stride, IntList dilation, int64_t groups, bool benchmark, bool deterministic) const override;
  virtual Tensor cudnn_convolution_transpose_backward_weight(IntList weight_size, const Tensor & grad_output, const Tensor & self, IntList padding, IntList stride, IntList dilation, int64_t groups, bool benchmark, bool deterministic) const override;
  virtual Tensor cudnn_grid_sampler(const Tensor & self, const Tensor & grid) const override;
  virtual std::tuple<Tensor,Tensor> cudnn_grid_sampler_backward(const Tensor & self, const Tensor & grid, const Tensor & grad_output) const override;
  virtual Tensor embedding_dense_backward(const Tensor & grad, const Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq) const override;
  virtual Tensor & embedding_renorm_(Tensor & self, const Tensor & indices, double max_norm, double norm_type) const override;
  virtual std::tuple<Tensor,Tensor,Tensor,Tensor> embedding_bag(const Tensor & weight, const Tensor & indices, const Tensor & offsets, bool scale_grad_by_freq, int64_t mode, bool sparse) const override;
  virtual Tensor embedding_bag_dense_backward(const Tensor & grad, const Tensor & indices, const Tensor & offsets, const Tensor & offset2bag, const Tensor & bag_size, const Tensor & maximum_indices, int64_t num_weights, bool scale_grad_by_freq, int64_t mode) const override;
  virtual Tensor & erf_(Tensor & self) const override;
  virtual Tensor & erf_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & exp_(Tensor & self) const override;
  virtual Tensor & exp_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & expm1_(Tensor & self) const override;
  virtual Tensor & expm1_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & eye_out(Tensor & result, int64_t n, int64_t m) const override;
  virtual Tensor & floor_(Tensor & self) const override;
  virtual Tensor & floor_out(Tensor & result, const Tensor & self) const override;
  virtual std::tuple<Tensor,Tensor> _gesv_helper(const Tensor & self, const Tensor & A) const override;
  virtual Tensor _fft_with_size(const Tensor & self, int64_t signal_ndim, bool complex_input, bool complex_output, bool inverse, IntList checked_signal_sizes, bool normalized, bool onesided, IntList output_sizes) const override;
  virtual Tensor & log_(Tensor & self) const override;
  virtual Tensor & log_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & log10_(Tensor & self) const override;
  virtual Tensor & log10_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & log1p_(Tensor & self) const override;
  virtual Tensor & log1p_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & log2_(Tensor & self) const override;
  virtual Tensor & log2_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor log_softmax(const Tensor & self, int64_t dim) const override;
  virtual Tensor log_softmax_backward_data(const Tensor & grad_output, const Tensor & output, int64_t dim, const Tensor & self) const override;
  virtual std::tuple<Tensor,Tensor> RoiPooling2d_forward(const Tensor & input, const Tensor & rois, int64_t pooledHeight, int64_t pooledWidth, double spatialScale) const override;
  virtual Tensor RoiPooling2d_backward(const Tensor & input, const Tensor & rois, int64_t pooledHeight, int64_t pooledWidth, double spatialScale, const Tensor & gradOutput, const Tensor & argmaxes) const override;
  virtual Tensor & round_(Tensor & self) const override;
  virtual Tensor & round_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & rsqrt_(Tensor & self) const override;
  virtual Tensor & rsqrt_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & sin_(Tensor & self) const override;
  virtual Tensor & sin_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & sinh_(Tensor & self) const override;
  virtual Tensor & sinh_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor softmax(const Tensor & self, int64_t dim) const override;
  virtual Tensor softmax_backward_data(const Tensor & grad_output, const Tensor & output, int64_t dim, const Tensor & self) const override;
  virtual Tensor & sspaddmm_out(Tensor & result, const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha) const override;
  virtual Tensor _sum(const Tensor & self) const override;
  virtual Tensor & _sum_cuda_out(Tensor & result, const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual Tensor & sqrt_(Tensor & self) const override;
  virtual Tensor & sqrt_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor _prod(const Tensor & self) const override;
  virtual Tensor & _prod_out(Tensor & result, const Tensor & self, int64_t dim, bool keepdim) const override;
  virtual Tensor & tan_(Tensor & self) const override;
  virtual Tensor & tan_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & tanh_(Tensor & self) const override;
  virtual Tensor & tanh_out(Tensor & result, const Tensor & self) const override;
  virtual Tensor & trunc_(Tensor & self) const override;
  virtual Tensor & trunc_out(Tensor & result, const Tensor & self) const override;
  virtual std::tuple<Tensor,Tensor> _unique(const Tensor & self, bool sorted, bool return_inverse) const override;
  virtual Tensor _s_where(const Tensor & condition, const Tensor & self, const Tensor & other) const override;
  virtual Tensor _standard_gamma_grad(const Tensor & self, const Tensor & output) const override;
  virtual Tensor _standard_gamma(const Tensor & self, Generator * generator) const override;
  virtual Tensor poisson(const Tensor & self, Generator * generator) const override;
};

} // namespace at