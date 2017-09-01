// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RENDERDEF_LULL_H_
#define FLATBUFFERS_GENERATED_RENDERDEF_LULL_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"

namespace lull {

struct QuadDef;

struct UniformDef;

struct FontDef;

struct RenderDef;

/// Render passes define the render state and high-level render order of
/// entities. Please keep these in sync with
/// //java/com/google/third_party/lullaby/Constants.java
enum RenderPass {
  /// Drawn first, so behind everything.
  RenderPass_Pano = 0  /// Zwrite on, ztest on, blending off.
,
  RenderPass_Opaque = 1  /// Zwrite off, ztest on, blending (1, 1-SrcAlpha).
,
  RenderPass_Main = 2  /// Zwrite off, ztest off, blending (1, 1-SrcAlpha).
,
  RenderPass_OverDraw = 3  /// Used to render debug information.
,
  RenderPass_Debug = 4  /// Not drawn.
,
  RenderPass_Invisible = 5  /// Zwrite off, ztest off, blending (1, 1), no culling.
,
  RenderPass_OverDrawGlow = 6,
  RenderPass_NumPredefinedPasses = 7,
  RenderPass_Invalid = 8  /// Apps are free to define custom render passes.  To help prevent conflicts,
  /// IDs should be kept in the following range.
,
  RenderPass_AppIdStart = 100,
  RenderPass_AppIdEnd = 200,
  RenderPass_MIN = RenderPass_Pano,
  RenderPass_MAX = RenderPass_AppIdEnd
};

inline RenderPass (&EnumValuesRenderPass())[11] {
  static RenderPass values[] = {
    RenderPass_Pano,
    RenderPass_Opaque,
    RenderPass_Main,
    RenderPass_OverDraw,
    RenderPass_Debug,
    RenderPass_Invisible,
    RenderPass_OverDrawGlow,
    RenderPass_NumPredefinedPasses,
    RenderPass_Invalid,
    RenderPass_AppIdStart,
    RenderPass_AppIdEnd
  };
  return values;
}

/// Controls the horizontal (x-axis) alignment of text.
enum HorizontalAlignment {
  HorizontalAlignment_Left = 0,
  HorizontalAlignment_Center = 1,
  HorizontalAlignment_Right = 2,
  HorizontalAlignment_MIN = HorizontalAlignment_Left,
  HorizontalAlignment_MAX = HorizontalAlignment_Right
};

inline HorizontalAlignment (&EnumValuesHorizontalAlignment())[3] {
  static HorizontalAlignment values[] = {
    HorizontalAlignment_Left,
    HorizontalAlignment_Center,
    HorizontalAlignment_Right
  };
  return values;
}

inline const char **EnumNamesHorizontalAlignment() {
  static const char *names[] = {
    "Left",
    "Center",
    "Right",
    nullptr
  };
  return names;
}

inline const char *EnumNameHorizontalAlignment(HorizontalAlignment e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesHorizontalAlignment()[index];
}

/// Controls the vertical (y-axis) alignemnt of text.
enum VerticalAlignment {
  VerticalAlignment_Top = 0,
  VerticalAlignment_Center = 1,
  VerticalAlignment_Baseline = 2,
  VerticalAlignment_Bottom = 3,
  VerticalAlignment_MIN = VerticalAlignment_Top,
  VerticalAlignment_MAX = VerticalAlignment_Bottom
};

inline VerticalAlignment (&EnumValuesVerticalAlignment())[4] {
  static VerticalAlignment values[] = {
    VerticalAlignment_Top,
    VerticalAlignment_Center,
    VerticalAlignment_Baseline,
    VerticalAlignment_Bottom
  };
  return values;
}

inline const char **EnumNamesVerticalAlignment() {
  static const char *names[] = {
    "Top",
    "Center",
    "Baseline",
    "Bottom",
    nullptr
  };
  return names;
}

inline const char *EnumNameVerticalAlignment(VerticalAlignment e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesVerticalAlignment()[index];
}

/// Describes a simple quad mesh.
/// TODO(b/38457584): NinePatches are now the recommended way of doing quads. We
/// should migrate to using those instead.
MANUALLY_ALIGNED_STRUCT(4) QuadDef FLATBUFFERS_FINAL_CLASS {
 private:
  float size_x_;
  float size_y_;
  int32_t verts_x_;
  int32_t verts_y_;
  uint8_t has_uv_;
  int8_t padding0__;  int16_t padding1__;
  float corner_radius_;
  int32_t corner_verts_;

 public:
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.QuadDef";
  }
  QuadDef() {
    memset(this, 0, sizeof(QuadDef));
  }
  QuadDef(const QuadDef &_o) {
    memcpy(this, &_o, sizeof(QuadDef));
  }
  QuadDef(float _size_x, float _size_y, int32_t _verts_x, int32_t _verts_y, bool _has_uv, float _corner_radius, int32_t _corner_verts)
      : size_x_(flatbuffers::EndianScalar(_size_x)),
        size_y_(flatbuffers::EndianScalar(_size_y)),
        verts_x_(flatbuffers::EndianScalar(_verts_x)),
        verts_y_(flatbuffers::EndianScalar(_verts_y)),
        has_uv_(flatbuffers::EndianScalar(static_cast<uint8_t>(_has_uv))),
        padding0__(0),
        padding1__(0),
        corner_radius_(flatbuffers::EndianScalar(_corner_radius)),
        corner_verts_(flatbuffers::EndianScalar(_corner_verts)) {
    (void)padding0__;    (void)padding1__;
  }
  /// The size in the x dimension.
  float size_x() const {
    return flatbuffers::EndianScalar(size_x_);
  }
  /// The size in the y dimension.
  float size_y() const {
    return flatbuffers::EndianScalar(size_y_);
  }
  /// Number of mesh vertices to generate in the x direction (default = 2).
  int32_t verts_x() const {
    return flatbuffers::EndianScalar(verts_x_);
  }
  /// Number of mesh vertices to generate in the y direction (default = 2).
  int32_t verts_y() const {
    return flatbuffers::EndianScalar(verts_y_);
  }
  /// Whether to add texture coordinates to the mesh (default = false).
  bool has_uv() const {
    return flatbuffers::EndianScalar(has_uv_) != 0;
  }
  /// Radius of rounded corners to create on the mesh (default = 0).
  float corner_radius() const {
    return flatbuffers::EndianScalar(corner_radius_);
  }
  /// Number of vertices in the triangle fan created at corners to produce the
  /// corner radius (default = 0).
  int32_t corner_verts() const {
    return flatbuffers::EndianScalar(corner_verts_);
  }
};
STRUCT_END(QuadDef, 28);

/// Specifies the value of a uniform shader variable.
struct UniformDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.UniformDef";
  }
  enum {
    VT_NAME = 4,
    VT_FLOAT_VALUE = 6,
    VT_DIMENSION = 8,
    VT_COUNT = 10
  };
  /// Required name of the uniform.
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  /// Required values of the uniform. There must be dimension * count values.
  const flatbuffers::Vector<float> *float_value() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_FLOAT_VALUE);
  }
  /// The dimension of the uniform. Supported dimensions are 1, 2, 3, 4, and 16.
  int32_t dimension() const {
    return GetField<int32_t>(VT_DIMENSION, 0);
  }
  /// The number of dimension-sized elements in the value array.
  int32_t count() const {
    return GetField<int32_t>(VT_COUNT, 1);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyOffset(verifier, VT_FLOAT_VALUE) &&
           verifier.Verify(float_value()) &&
           VerifyField<int32_t>(verifier, VT_DIMENSION) &&
           VerifyField<int32_t>(verifier, VT_COUNT) &&
           verifier.EndTable();
  }
};

struct UniformDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(UniformDef::VT_NAME, name);
  }
  void add_float_value(flatbuffers::Offset<flatbuffers::Vector<float>> float_value) {
    fbb_.AddOffset(UniformDef::VT_FLOAT_VALUE, float_value);
  }
  void add_dimension(int32_t dimension) {
    fbb_.AddElement<int32_t>(UniformDef::VT_DIMENSION, dimension, 0);
  }
  void add_count(int32_t count) {
    fbb_.AddElement<int32_t>(UniformDef::VT_COUNT, count, 1);
  }
  UniformDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  UniformDefBuilder &operator=(const UniformDefBuilder &);
  flatbuffers::Offset<UniformDef> Finish() {
    const auto end = fbb_.EndTable(start_, 4);
    auto o = flatbuffers::Offset<UniformDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<UniformDef> CreateUniformDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> float_value = 0,
    int32_t dimension = 0,
    int32_t count = 1) {
  UniformDefBuilder builder_(_fbb);
  builder_.add_count(count);
  builder_.add_dimension(dimension);
  builder_.add_float_value(float_value);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<UniformDef> CreateUniformDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const std::vector<float> *float_value = nullptr,
    int32_t dimension = 0,
    int32_t count = 1) {
  return lull::CreateUniformDef(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      float_value ? _fbb.CreateVector<float>(*float_value) : 0,
      dimension,
      count);
}

/// Specifies information about the font used for text rendering in a RenderDef.
/// FontDef is entirely deprecated.  You should use TextDef instead.
struct FontDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.FontDef";
  }
  enum {
    VT_FONT = 4,
    VT_SIZE = 6,
    VT_EDGE_THRESHOLD = 8,
    VT_EDGE_SOFTNESS = 10,
    VT_LINE_HEIGHT_SCALE = 12,
    VT_HORIZONTAL_ALIGNMENT = 14,
    VT_VERTICAL_ALIGNMENT = 16,
    VT_RECT_WIDTH = 18,
    VT_RECT_HEIGHT = 20,
    VT_ELLIPSIS = 22,
    VT_FONTS = 24,
    VT_WRAP_CONTENT = 26,
    VT_KERNING_SCALE = 28,
    VT_PARSE_AND_STRIP_HTML = 30,
    VT_HTML_LINK_COLOR = 32
  };
  /// DEPRECATED! Use fonts instead.
  /// The name of the font to use. This field only allows a single font name
  /// and ".ttf will be appended to the string automatically.
  const flatbuffers::String *font() const {
    return GetPointer<const flatbuffers::String *>(VT_FONT);
  }
  /// The font size, measured in mm from the top to bottom of each line
  /// (including any ascenders/descenders and leading).
  /// The size of the text bounding box is this value multiplied by the number
  /// of lines.
  int32_t size() const {
    return GetField<int32_t>(VT_SIZE, 0);
  }
  /// Edge threshold: determines where the edge of the glyph is.  This is in
  /// normalized color space [0,1] -- a value of 0.5 means to use the edge as
  /// defined by the source font.
  float edge_threshold() const {
    return GetField<float>(VT_EDGE_THRESHOLD, 0.5f);
  }
  /// Glyph edge softness: [0,1] where 0 = hard edges, 1 = opaque @ glyph
  /// center.
  float edge_softness() const {
    return GetField<float>(VT_EDGE_SOFTNESS, 0.3f);
  }
  /// The spacing between lines as a function of the font size.
  float line_height_scale() const {
    return GetField<float>(VT_LINE_HEIGHT_SCALE, 1.2f);
  }
  /// How to align the text in the x direction (default = Center, can also be
  /// Left or Right).
  HorizontalAlignment horizontal_alignment() const {
    return static_cast<HorizontalAlignment>(GetField<int32_t>(VT_HORIZONTAL_ALIGNMENT, 1));
  }
  /// How to align the text in the y direction (default = Center, can also be
  /// Top, Baseline, or Bottom).
  VerticalAlignment vertical_alignment() const {
    return static_cast<VerticalAlignment>(GetField<int32_t>(VT_VERTICAL_ALIGNMENT, 1));
  }
  /// Rectangle area to render the text. If both are zeros, text will be
  /// rendered in a single line. If height is zero, text will be rendered in
  /// multiple lines if it doesn't fit into a single line.
  /// Since Ion doesn't support text layout, text will always be rendered in
  /// single line in Ion. Values are measured in mm.
  int32_t rect_width() const {
    return GetField<int32_t>(VT_RECT_WIDTH, 0);
  }
  int32_t rect_height() const {
    return GetField<int32_t>(VT_RECT_HEIGHT, 0);
  }
  /// The string used as an ellipsis. Setting this to a nonempty string enables
  /// text truncation. The specified ellipsis will be appended to the truncated
  /// text.
  const flatbuffers::String *ellipsis() const {
    return GetPointer<const flatbuffers::String *>(VT_ELLIPSIS);
  }
  /// A list of fonts to use. Each font should contain suffix as well, such
  /// as ".ttf". For FPL backend fonts are selected with a fallback priority.
  /// And ".SystemFont" can be used to refer to system font. For Ion backend
  /// the first font in the list will be always used and the rest are simply
  /// ignored.
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *fonts() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_FONTS);
  }
  /// If true, sets the aabb bounds to the bounds of the text content.
  /// Otherwise, sets it to rect_width or rect_height if non-zero.
  /// Note: This applies to FPL rendering only.
  bool wrap_content() const {
    return GetField<uint8_t>(VT_WRAP_CONTENT, 0) != 0;
  }
  /// A float value specifying a scale applied to the kerning value between
  /// glyphs. This applies to FPL rendering only.
  float kerning_scale() const {
    return GetField<float>(VT_KERNING_SCALE, 1.0f);
  }
  /// If true, then any html tags present in the text will be stripped.
  bool parse_and_strip_html() const {
    return GetField<uint8_t>(VT_PARSE_AND_STRIP_HTML, 0) != 0;
  }
  /// If parse_and_strip_html is true then this will be the color of any of the
  /// href links in the font.
  const lull::Color *html_link_color() const {
    return GetStruct<const lull::Color *>(VT_HTML_LINK_COLOR);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FONT) &&
           verifier.Verify(font()) &&
           VerifyField<int32_t>(verifier, VT_SIZE) &&
           VerifyField<float>(verifier, VT_EDGE_THRESHOLD) &&
           VerifyField<float>(verifier, VT_EDGE_SOFTNESS) &&
           VerifyField<float>(verifier, VT_LINE_HEIGHT_SCALE) &&
           VerifyField<int32_t>(verifier, VT_HORIZONTAL_ALIGNMENT) &&
           VerifyField<int32_t>(verifier, VT_VERTICAL_ALIGNMENT) &&
           VerifyField<int32_t>(verifier, VT_RECT_WIDTH) &&
           VerifyField<int32_t>(verifier, VT_RECT_HEIGHT) &&
           VerifyOffset(verifier, VT_ELLIPSIS) &&
           verifier.Verify(ellipsis()) &&
           VerifyOffset(verifier, VT_FONTS) &&
           verifier.Verify(fonts()) &&
           verifier.VerifyVectorOfStrings(fonts()) &&
           VerifyField<uint8_t>(verifier, VT_WRAP_CONTENT) &&
           VerifyField<float>(verifier, VT_KERNING_SCALE) &&
           VerifyField<uint8_t>(verifier, VT_PARSE_AND_STRIP_HTML) &&
           VerifyField<lull::Color>(verifier, VT_HTML_LINK_COLOR) &&
           verifier.EndTable();
  }
};

struct FontDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_font(flatbuffers::Offset<flatbuffers::String> font) {
    fbb_.AddOffset(FontDef::VT_FONT, font);
  }
  void add_size(int32_t size) {
    fbb_.AddElement<int32_t>(FontDef::VT_SIZE, size, 0);
  }
  void add_edge_threshold(float edge_threshold) {
    fbb_.AddElement<float>(FontDef::VT_EDGE_THRESHOLD, edge_threshold, 0.5f);
  }
  void add_edge_softness(float edge_softness) {
    fbb_.AddElement<float>(FontDef::VT_EDGE_SOFTNESS, edge_softness, 0.3f);
  }
  void add_line_height_scale(float line_height_scale) {
    fbb_.AddElement<float>(FontDef::VT_LINE_HEIGHT_SCALE, line_height_scale, 1.2f);
  }
  void add_horizontal_alignment(HorizontalAlignment horizontal_alignment) {
    fbb_.AddElement<int32_t>(FontDef::VT_HORIZONTAL_ALIGNMENT, static_cast<int32_t>(horizontal_alignment), 1);
  }
  void add_vertical_alignment(VerticalAlignment vertical_alignment) {
    fbb_.AddElement<int32_t>(FontDef::VT_VERTICAL_ALIGNMENT, static_cast<int32_t>(vertical_alignment), 1);
  }
  void add_rect_width(int32_t rect_width) {
    fbb_.AddElement<int32_t>(FontDef::VT_RECT_WIDTH, rect_width, 0);
  }
  void add_rect_height(int32_t rect_height) {
    fbb_.AddElement<int32_t>(FontDef::VT_RECT_HEIGHT, rect_height, 0);
  }
  void add_ellipsis(flatbuffers::Offset<flatbuffers::String> ellipsis) {
    fbb_.AddOffset(FontDef::VT_ELLIPSIS, ellipsis);
  }
  void add_fonts(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> fonts) {
    fbb_.AddOffset(FontDef::VT_FONTS, fonts);
  }
  void add_wrap_content(bool wrap_content) {
    fbb_.AddElement<uint8_t>(FontDef::VT_WRAP_CONTENT, static_cast<uint8_t>(wrap_content), 0);
  }
  void add_kerning_scale(float kerning_scale) {
    fbb_.AddElement<float>(FontDef::VT_KERNING_SCALE, kerning_scale, 1.0f);
  }
  void add_parse_and_strip_html(bool parse_and_strip_html) {
    fbb_.AddElement<uint8_t>(FontDef::VT_PARSE_AND_STRIP_HTML, static_cast<uint8_t>(parse_and_strip_html), 0);
  }
  void add_html_link_color(const lull::Color *html_link_color) {
    fbb_.AddStruct(FontDef::VT_HTML_LINK_COLOR, html_link_color);
  }
  FontDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FontDefBuilder &operator=(const FontDefBuilder &);
  flatbuffers::Offset<FontDef> Finish() {
    const auto end = fbb_.EndTable(start_, 15);
    auto o = flatbuffers::Offset<FontDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<FontDef> CreateFontDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> font = 0,
    int32_t size = 0,
    float edge_threshold = 0.5f,
    float edge_softness = 0.3f,
    float line_height_scale = 1.2f,
    HorizontalAlignment horizontal_alignment = HorizontalAlignment_Center,
    VerticalAlignment vertical_alignment = VerticalAlignment_Center,
    int32_t rect_width = 0,
    int32_t rect_height = 0,
    flatbuffers::Offset<flatbuffers::String> ellipsis = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> fonts = 0,
    bool wrap_content = false,
    float kerning_scale = 1.0f,
    bool parse_and_strip_html = false,
    const lull::Color *html_link_color = 0) {
  FontDefBuilder builder_(_fbb);
  builder_.add_html_link_color(html_link_color);
  builder_.add_kerning_scale(kerning_scale);
  builder_.add_fonts(fonts);
  builder_.add_ellipsis(ellipsis);
  builder_.add_rect_height(rect_height);
  builder_.add_rect_width(rect_width);
  builder_.add_vertical_alignment(vertical_alignment);
  builder_.add_horizontal_alignment(horizontal_alignment);
  builder_.add_line_height_scale(line_height_scale);
  builder_.add_edge_softness(edge_softness);
  builder_.add_edge_threshold(edge_threshold);
  builder_.add_size(size);
  builder_.add_font(font);
  builder_.add_parse_and_strip_html(parse_and_strip_html);
  builder_.add_wrap_content(wrap_content);
  return builder_.Finish();
}

inline flatbuffers::Offset<FontDef> CreateFontDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *font = nullptr,
    int32_t size = 0,
    float edge_threshold = 0.5f,
    float edge_softness = 0.3f,
    float line_height_scale = 1.2f,
    HorizontalAlignment horizontal_alignment = HorizontalAlignment_Center,
    VerticalAlignment vertical_alignment = VerticalAlignment_Center,
    int32_t rect_width = 0,
    int32_t rect_height = 0,
    const char *ellipsis = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *fonts = nullptr,
    bool wrap_content = false,
    float kerning_scale = 1.0f,
    bool parse_and_strip_html = false,
    const lull::Color *html_link_color = 0) {
  return lull::CreateFontDef(
      _fbb,
      font ? _fbb.CreateString(font) : 0,
      size,
      edge_threshold,
      edge_softness,
      line_height_scale,
      horizontal_alignment,
      vertical_alignment,
      rect_width,
      rect_height,
      ellipsis ? _fbb.CreateString(ellipsis) : 0,
      fonts ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*fonts) : 0,
      wrap_content,
      kerning_scale,
      parse_and_strip_html,
      html_link_color);
}

/// Describes how to render an entity.
struct RenderDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.RenderDef";
  }
  enum {
    VT_PASS = 4,
    VT_MESH = 6,
    VT_QUAD = 8,
    VT_SHADER = 10,
    VT_TEXTURE = 12,
    VT_CREATE_MIPS = 14,
    VT_TEXT = 16,
    VT_FONT = 18,
    VT_COLOR = 20,
    VT_COLOR_HEX = 22,
    VT_UNIFORMS = 24,
    VT_SORT_ORDER_OFFSET = 26,
    VT_SHAPE_ID = 28,
    VT_HIDDEN = 30,
    VT_EXTERNAL_TEXTURE = 32,
    VT_TEXTURES = 34,
    VT_ID = 36
  };
  /// Which render pass this entity belongs to (and by extension, its render
  /// state).
  RenderPass pass() const {
    return static_cast<RenderPass>(GetField<int32_t>(VT_PASS, 2));
  }
  /// An fpl mesh representing the triangle mesh for the model associated with
  /// the entity.
  const flatbuffers::String *mesh() const {
    return GetPointer<const flatbuffers::String *>(VT_MESH);
  }
  /// A [QuadDef](#quaddef) defines the mesh for the entity based on a simple
  /// quadrilateral.
  const QuadDef *quad() const {
    return GetStruct<const QuadDef *>(VT_QUAD);
  }
  /// An fpl shader used to render the entity (fpl shaders are built from glslv
  /// and glslf vertex and fragment shader programs).
  const flatbuffers::String *shader() const {
    return GetPointer<const flatbuffers::String *>(VT_SHADER);
  }
  /// The bitmap to use as a texture for the entity (supported formats: WEBP,
  /// PNG, TGA).
  const flatbuffers::String *texture() const {
    return GetPointer<const flatbuffers::String *>(VT_TEXTURE);
  }
  /// Flag that specifies whether the texture mip chain should be automatically
  /// generated.  Ignored if |texture| is not specified.
  bool create_mips() const {
    return GetField<uint8_t>(VT_CREATE_MIPS, 0) != 0;
  }
  /// The unprocessed text string.  If a StringProcessor exists in the app, the
  /// result of ProcessString(text) will be rendered.  Otherwise, |text| will be
  /// rendered.
  const flatbuffers::String *text() const {
    return GetPointer<const flatbuffers::String *>(VT_TEXT);
  }
  /// The font to use for text rendering.
  const FontDef *font() const {
    return GetPointer<const FontDef *>(VT_FONT);
  }
  /// An rgba color associated with the entity.  Can be specified either as a
  /// 4-component map of RGBA values ranging from 0.0 to 1.0 or as a
  /// hexadecimal string (eg. "#336699FF").
  const lull::Color *color() const {
    return GetStruct<const lull::Color *>(VT_COLOR);
  }
  /// "xxxxxx" or "xxxxxxxx" with optional "#" prefix
  const flatbuffers::String *color_hex() const {
    return GetPointer<const flatbuffers::String *>(VT_COLOR_HEX);
  }
  /// A list of uniform variables and values to set on the shader.
  const flatbuffers::Vector<flatbuffers::Offset<UniformDef>> *uniforms() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<UniformDef>> *>(VT_UNIFORMS);
  }
  /// An amount to adjust the sort order of the entity (relative to its parent,
  /// which defaults to 0). This controls the ordering of the display list.
  /// Allows alpha-blended objects to be rendered in a controlled order
  /// (generally back to front).  Refer to g3doc for more info.
  int32_t sort_order_offset() const {
    return GetField<int32_t>(VT_SORT_ORDER_OFFSET, 0);
  }
  /// A unique name given to the runtime shape (eg. quad).  All shapes with this
  /// name will share the same mesh.
  const flatbuffers::String *shape_id() const {
    return GetPointer<const flatbuffers::String *>(VT_SHAPE_ID);
  }
  /// If true, start off not drawing the entity. Use RenderSystem::Show() to
  /// start drawing the entity in the RenderPass |pass|. If |pass| is Invisible
  /// it will still not be drawn.
  bool hidden() const {
    return GetField<uint8_t>(VT_HIDDEN, 0) != 0;
  }
  /// Creates an TEXTURE_EXTERNAL_OES texture for the entity, which can then be
  /// bound to an external texture source (eg. camera stream, video stream,
  /// etc.)
  bool external_texture() const {
    return GetField<uint8_t>(VT_EXTERNAL_TEXTURE, 0) != 0;
  }
  /// The bitmaps to use as textures for the entity (supported formats: WEBP,
  /// PNG, TGA). Each texture will be set to the corresponding texture unit
  /// based on its index in the array.
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *textures() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_TEXTURES);
  }
  /// Special string used to identify different render components associated
  /// with a single entity.
  uint32_t id() const {
    return GetField<uint32_t>(VT_ID, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_PASS) &&
           VerifyOffset(verifier, VT_MESH) &&
           verifier.Verify(mesh()) &&
           VerifyField<QuadDef>(verifier, VT_QUAD) &&
           VerifyOffset(verifier, VT_SHADER) &&
           verifier.Verify(shader()) &&
           VerifyOffset(verifier, VT_TEXTURE) &&
           verifier.Verify(texture()) &&
           VerifyField<uint8_t>(verifier, VT_CREATE_MIPS) &&
           VerifyOffset(verifier, VT_TEXT) &&
           verifier.Verify(text()) &&
           VerifyOffset(verifier, VT_FONT) &&
           verifier.VerifyTable(font()) &&
           VerifyField<lull::Color>(verifier, VT_COLOR) &&
           VerifyOffset(verifier, VT_COLOR_HEX) &&
           verifier.Verify(color_hex()) &&
           VerifyOffset(verifier, VT_UNIFORMS) &&
           verifier.Verify(uniforms()) &&
           verifier.VerifyVectorOfTables(uniforms()) &&
           VerifyField<int32_t>(verifier, VT_SORT_ORDER_OFFSET) &&
           VerifyOffset(verifier, VT_SHAPE_ID) &&
           verifier.Verify(shape_id()) &&
           VerifyField<uint8_t>(verifier, VT_HIDDEN) &&
           VerifyField<uint8_t>(verifier, VT_EXTERNAL_TEXTURE) &&
           VerifyOffset(verifier, VT_TEXTURES) &&
           verifier.Verify(textures()) &&
           verifier.VerifyVectorOfStrings(textures()) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct RenderDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_pass(RenderPass pass) {
    fbb_.AddElement<int32_t>(RenderDef::VT_PASS, static_cast<int32_t>(pass), 2);
  }
  void add_mesh(flatbuffers::Offset<flatbuffers::String> mesh) {
    fbb_.AddOffset(RenderDef::VT_MESH, mesh);
  }
  void add_quad(const QuadDef *quad) {
    fbb_.AddStruct(RenderDef::VT_QUAD, quad);
  }
  void add_shader(flatbuffers::Offset<flatbuffers::String> shader) {
    fbb_.AddOffset(RenderDef::VT_SHADER, shader);
  }
  void add_texture(flatbuffers::Offset<flatbuffers::String> texture) {
    fbb_.AddOffset(RenderDef::VT_TEXTURE, texture);
  }
  void add_create_mips(bool create_mips) {
    fbb_.AddElement<uint8_t>(RenderDef::VT_CREATE_MIPS, static_cast<uint8_t>(create_mips), 0);
  }
  void add_text(flatbuffers::Offset<flatbuffers::String> text) {
    fbb_.AddOffset(RenderDef::VT_TEXT, text);
  }
  void add_font(flatbuffers::Offset<FontDef> font) {
    fbb_.AddOffset(RenderDef::VT_FONT, font);
  }
  void add_color(const lull::Color *color) {
    fbb_.AddStruct(RenderDef::VT_COLOR, color);
  }
  void add_color_hex(flatbuffers::Offset<flatbuffers::String> color_hex) {
    fbb_.AddOffset(RenderDef::VT_COLOR_HEX, color_hex);
  }
  void add_uniforms(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<UniformDef>>> uniforms) {
    fbb_.AddOffset(RenderDef::VT_UNIFORMS, uniforms);
  }
  void add_sort_order_offset(int32_t sort_order_offset) {
    fbb_.AddElement<int32_t>(RenderDef::VT_SORT_ORDER_OFFSET, sort_order_offset, 0);
  }
  void add_shape_id(flatbuffers::Offset<flatbuffers::String> shape_id) {
    fbb_.AddOffset(RenderDef::VT_SHAPE_ID, shape_id);
  }
  void add_hidden(bool hidden) {
    fbb_.AddElement<uint8_t>(RenderDef::VT_HIDDEN, static_cast<uint8_t>(hidden), 0);
  }
  void add_external_texture(bool external_texture) {
    fbb_.AddElement<uint8_t>(RenderDef::VT_EXTERNAL_TEXTURE, static_cast<uint8_t>(external_texture), 0);
  }
  void add_textures(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> textures) {
    fbb_.AddOffset(RenderDef::VT_TEXTURES, textures);
  }
  void add_id(uint32_t id) {
    fbb_.AddElement<uint32_t>(RenderDef::VT_ID, id, 0);
  }
  RenderDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RenderDefBuilder &operator=(const RenderDefBuilder &);
  flatbuffers::Offset<RenderDef> Finish() {
    const auto end = fbb_.EndTable(start_, 17);
    auto o = flatbuffers::Offset<RenderDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<RenderDef> CreateRenderDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    RenderPass pass = RenderPass_Main,
    flatbuffers::Offset<flatbuffers::String> mesh = 0,
    const QuadDef *quad = 0,
    flatbuffers::Offset<flatbuffers::String> shader = 0,
    flatbuffers::Offset<flatbuffers::String> texture = 0,
    bool create_mips = false,
    flatbuffers::Offset<flatbuffers::String> text = 0,
    flatbuffers::Offset<FontDef> font = 0,
    const lull::Color *color = 0,
    flatbuffers::Offset<flatbuffers::String> color_hex = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<UniformDef>>> uniforms = 0,
    int32_t sort_order_offset = 0,
    flatbuffers::Offset<flatbuffers::String> shape_id = 0,
    bool hidden = false,
    bool external_texture = false,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> textures = 0,
    uint32_t id = 0) {
  RenderDefBuilder builder_(_fbb);
  builder_.add_id(id);
  builder_.add_textures(textures);
  builder_.add_shape_id(shape_id);
  builder_.add_sort_order_offset(sort_order_offset);
  builder_.add_uniforms(uniforms);
  builder_.add_color_hex(color_hex);
  builder_.add_color(color);
  builder_.add_font(font);
  builder_.add_text(text);
  builder_.add_texture(texture);
  builder_.add_shader(shader);
  builder_.add_quad(quad);
  builder_.add_mesh(mesh);
  builder_.add_pass(pass);
  builder_.add_external_texture(external_texture);
  builder_.add_hidden(hidden);
  builder_.add_create_mips(create_mips);
  return builder_.Finish();
}

inline flatbuffers::Offset<RenderDef> CreateRenderDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    RenderPass pass = RenderPass_Main,
    const char *mesh = nullptr,
    const QuadDef *quad = 0,
    const char *shader = nullptr,
    const char *texture = nullptr,
    bool create_mips = false,
    const char *text = nullptr,
    flatbuffers::Offset<FontDef> font = 0,
    const lull::Color *color = 0,
    const char *color_hex = nullptr,
    const std::vector<flatbuffers::Offset<UniformDef>> *uniforms = nullptr,
    int32_t sort_order_offset = 0,
    const char *shape_id = nullptr,
    bool hidden = false,
    bool external_texture = false,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *textures = nullptr,
    uint32_t id = 0) {
  return lull::CreateRenderDef(
      _fbb,
      pass,
      mesh ? _fbb.CreateString(mesh) : 0,
      quad,
      shader ? _fbb.CreateString(shader) : 0,
      texture ? _fbb.CreateString(texture) : 0,
      create_mips,
      text ? _fbb.CreateString(text) : 0,
      font,
      color,
      color_hex ? _fbb.CreateString(color_hex) : 0,
      uniforms ? _fbb.CreateVector<flatbuffers::Offset<UniformDef>>(*uniforms) : 0,
      sort_order_offset,
      shape_id ? _fbb.CreateString(shape_id) : 0,
      hidden,
      external_texture,
      textures ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*textures) : 0,
      id);
}

}  // namespace lull

#endif  // FLATBUFFERS_GENERATED_RENDERDEF_LULL_H_
