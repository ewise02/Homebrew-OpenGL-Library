#include "loader.h"
#include "win32glpointers.h"

void* load_opengl_func_win32(const char* name) {

    void* func = (void*)wglGetProcAddress(name);

    if(func == 0 || (func == (void*)0x1) || (func == (void*)0x2) || (func == (void*)0x3) || (func == (void*)-1)) {
        HMODULE load_library = LoadLibraryA("opengl32.dll");
        func = (void*)GetProcAddress(load_library, name);
    }

    return func;
}

static PFNGLACCUMPROC gl_0 = NULL;
void glAccum(GLenum op, GLfloat value) {
}

static PFNGLACTIVETEXTUREPROC gl_1 = NULL;
void glActiveTexture(GLenum texture) {
}

static PFNGLALPHAFUNCPROC gl_2 = NULL;
void glAlphaFunc(GLenum func, GLclampf red) {
}

static PFNGLARETEXTURESRESIDENTPROC gl_3 = NULL;
GLboolean glAreTexturesResident(GLsizei n, const GLuint* textures, GLboolean* residences) {
}

static PFNGLARRAYELEMENTPROC gl_4 = NULL;
void glArrayElement(GLint i) {
}

static PFNGLATTACHSHADERPROC gl_5 = NULL;
void glAttachShader(GLuint program, GLuint shader) {
}

static PFNGLBEGINPROC gl_6 = NULL;
void glBegin(GLenum mode) {
}

static PFNGLENDPROC gl_7 = NULL;
void glEnd() {
}

static PFNGLBEGINQUERYPROC gl_8 = NULL;
void glBeginQuery(GLenum target, GLuint id) {
}

static PFNGLENDQUERYPROC gl_9 = NULL;
void glEndQuery(GLenum target) {
}

static PFNGLBINDATTRIBLOCATIONPROC gl_10 = NULL;
void glBindAttribLocation(GLuint program, GLuint index, const GLchar *name) {
}

static PFNGLBINDBUFFERPROC gl_11 = NULL;
void glBindBuffer(GLenum target, GLuint buffer) {
}

static PFNGLBINDTEXTUREPROC gl_12 = NULL;
void glBindTexture(GLenum target, GLuint texture) {
}

static PFNGLBITMAPPROC gl_13 = NULL;
void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap) {
}

static PFNGLBLENDCOLORPROC gl_14 = NULL;
void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
}

static PFNGLBLENDEQUATIONPROC gl_15 = NULL;
void glBlendEquation(GLenum mode) {
}

static PFNGLBLENDEQUATIONSEPARATEPROC gl_16 = NULL;
void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
}

static PFNGLBLENDFUNCPROC gl_17 = NULL;
void glBlendFunc(GLenum sfactor, GLenum dfactor) {
}

static PFNGLBLENDFUNCSEPARATEPROC gl_18 = NULL;
void glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
}

static PFNGLBUFFERDATAPROC gl_19 = NULL;
void glBufferData(GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage) {
}

static PFNGLBUFFERSUBDATAPROC gl_20 = NULL;
void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data) {
}

static PFNGLCALLLISTPROC gl_21 = NULL;
void glCallList(GLuint list) {
}

static PFNGLCALLLISTSPROC gl_22 = NULL;
void glCallLists(GLsizei n, GLenum type, const GLvoid *lists) {
}

static PFNGLCLEARPROC gl_23 = NULL;
void glClear(GLbitfield mask) {
}

static PFNGLCLEARACCUMPROC gl_24 = NULL;
void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
}

static PFNGLCLEARCOLORPROC gl_25 = NULL;
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
}

static PFNGLCLEARDEPTHPROC gl_26 = NULL;
void glClearDepth(GLclampd depth) {
}

static PFNGLCLEARINDEXPROC gl_27 = NULL;
void glClearIndex(GLfloat c) {
}

static PFNGLCLEARSTENCILPROC gl_28 = NULL;
void glClearStencil(GLint s) {
}

static PFNGLCLIENTACTIVETEXTUREPROC gl_29 = NULL;
void glClientActiveTexture(GLenum texture) {
}

static PFNGLCLIPPLANEPROC gl_30 = NULL;
void glClipPlane(GLenum plane, const GLdouble *equation) {
}

static PFNGLCOLOR3BPROC gl_31 = NULL;
void glColor3b(GLbyte red, GLbyte green, GLbyte blue) {
}

static PFNGLCOLOR3SPROC gl_32 = NULL;
void glColor3s(GLshort red, GLshort green, GLshort blue) {
}

static PFNGLCOLOR3IPROC gl_33 = NULL;
void glColor3i(GLint red, GLint green, GLint blue) {
}

static PFNGLCOLOR3FPROC gl_34 = NULL;
void glColor3f(GLfloat red, GLfloat green, GLfloat blue) {
}

static PFNGLCOLOR3DPROC gl_35 = NULL;
void glColor3d(GLdouble red, GLdouble green, GLdouble blue) {
}

static PFNGLCOLOR3UBPROC gl_36 = NULL;
void glColor3ub(GLubyte red, GLubyte green, GLubyte blue) {
}

static PFNGLCOLOR3USPROC gl_37 = NULL;
void glColor3us(GLushort red, GLushort green, GLushort blue) {
}

static PFNGLCOLOR3UIPROC gl_38 = NULL;
void glColor3ui(GLuint red, GLuint green, GLuint blue) {
}

static PFNGLCOLOR4BPROC gl_39 = NULL;
void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha) {
}

static PFNGLCOLOR4SPROC gl_40 = NULL;
void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha) {
}

static PFNGLCOLOR4IPROC gl_41 = NULL;
void glColor4i(GLint red, GLint green, GLint blue, GLint alpha) {
}

static PFNGLCOLOR4FPROC gl_42 = NULL;
void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
}

static PFNGLCOLOR4DPROC gl_43 = NULL;
void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha) {
}

static PFNGLCOLOR4UBPROC gl_44 = NULL;
void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) {
}

static PFNGLCOLOR4USPROC gl_45 = NULL;
void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha) {
}

static PFNGLCOLOR4UIPROC gl_46 = NULL;
void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha) {
}

static PFNGLCOLOR3BVPROC gl_47 = NULL;
void glColor3bv(const GLbyte *v) {
}

static PFNGLCOLOR3SVPROC gl_48 = NULL;
void glColor3sv(const GLshort *v) {
}

static PFNGLCOLOR3IVPROC gl_49 = NULL;
void glColor3iv(const GLint *v) {
}

static PFNGLCOLOR3FVPROC gl_50 = NULL;
void glColor3fv(const GLfloat *v) {
}

static PFNGLCOLOR3DVPROC gl_51 = NULL;
void glColor3dv(const GLdouble *v) {
}

static PFNGLCOLOR3UBVPROC gl_52 = NULL;
void glColor3ubv(const GLubyte *v) {
}

static PFNGLCOLOR3USVPROC gl_53 = NULL;
void glColor3usv(const GLushort *v) {
}

static PFNGLCOLOR3UIVPROC gl_54 = NULL;
void glColor3uiv(const GLuint *v) {
}

static PFNGLCOLOR4BVPROC gl_55 = NULL;
void glColor4bv(const GLbyte *v) {
}

static PFNGLCOLOR4SVPROC gl_56 = NULL;
void glColor4sv(const GLshort *v) {
}

static PFNGLCOLOR4IVPROC gl_57 = NULL;
void glColor4iv(const GLint *v) {
}

static PFNGLCOLOR4FVPROC gl_58 = NULL;
void glColor4fv(const GLfloat *v) {
}

static PFNGLCOLOR4DVPROC gl_59 = NULL;
void glColor4dv(const GLdouble *v) {
}

static PFNGLCOLOR4UBVPROC gl_60 = NULL;
void glColor4ubv(const GLubyte *v) {
}

static PFNGLCOLOR4USVPROC gl_61 = NULL;
void glColor4usv(const GLushort *v) {
}

static PFNGLCOLOR4UIVPROC gl_62 = NULL;
void glColor4uiv(const GLuint *v) {
}

static PFNGLCOLORMASKPROC gl_63 = NULL;
void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
}

static PFNGLCOLORMATERIALPROC gl_64 = NULL;
void glColorMaterial(GLenum face, GLenum mode) {
}

static PFNGLCOLORPOINTERPROC gl_65 = NULL;
void glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}

static PFNGLCOMPILESHADERPROC gl_66 = NULL;
void glCompileShader(GLuint shader) {
}

static PFNGLCOMPRESSEDTEXIMAGE1DPROC gl_67 = NULL;
void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data) {
}

static PFNGLCOMPRESSEDTEXIMAGE2DPROC gl_68 = NULL;
void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data) {
}

static PFNGLCOMPRESSEDTEXIMAGE3DPROC gl_69 = NULL;
void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data) {
}

static PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC gl_70 = NULL;
void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data) {
}

static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC gl_71 = NULL;
void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum imageSize, const GLvoid* data) {
}

static PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC gl_72 = NULL;
void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data) {
}

static PFNGLCOPYPIXELSPROC gl_73 = NULL;
void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type) {
}

static PFNGLCOPYTEXIMAGE1DPROC gl_74 = NULL;
void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
}

static PFNGLCOPYTEXIMAGE2DPROC gl_75 = NULL;
void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
}

static PFNGLCOPYTEXSUBIMAGE1DPROC gl_76 = NULL;
void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
}

static PFNGLCOPYTEXSUBIMAGE2DPROC gl_77 = NULL;
void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}

static PFNGLCOPYTEXSUBIMAGE3DPROC gl_78 = NULL;
void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}

static PFNGLCREATEPROGRAMPROC gl_79 = NULL;
GLuint glCreateProgram() {
}

static PFNGLCREATESHADERPROC gl_80 = NULL;
GLuint glCreateShader(GLenum shaderType) {
}

static PFNGLCULLFACEPROC gl_81 = NULL;
void glCullFace(GLenum mode) {
}

static PFNGLDELETEBUFFERSPROC gl_82 = NULL;
void glDeleteBuffers(GLsizei n, const GLuint *buffers) {
}

static PFNGLDELETELISTSPROC gl_83 = NULL;
void glDeleteLists(GLuint list, GLsizei range) {
}

static PFNGLDELETEPROGRAMPROC gl_84 = NULL;
void glDeleteProgram(GLuint program) {
}

static PFNGLDELETEQUERIESPROC gl_85 = NULL;
void glDeleteQueries(GLsizei n, const GLuint *ids) {
}

static PFNGLDELETESHADERPROC gl_86 = NULL;
void glDeleteShader(GLuint shader) {
}

static PFNGLDELETETEXTURESPROC gl_87 = NULL;
void glDeleteTextures(GLsizei n, const GLuint *textures) {
}

static PFNGLDEPTHFUNCPROC gl_88 = NULL;
void glDepthFunc(GLenum func) {
}

static PFNGLDEPTHMASKPROC gl_89 = NULL;
void glDepthMask(GLboolean flag) {
}

static PFNGLDEPTHRANGEPROC gl_90 = NULL;
void glDepthRange(GLclampd nearVal, GLclampd farVal) {
}

static PFNGLDETACHSHADERPROC gl_91 = NULL;
void glDetachShader(GLuint program, GLuint shader) {
}

static PFNGLENABLEPROC gl_92 = NULL;
void glEnable(GLenum cap) {
}

static PFNGLDISABLEPROC gl_93 = NULL;
void glDisable(GLenum cap) {
}

static PFNGLENABLECLIENTSTATEPROC gl_94 = NULL;
void glEnableClientState(GLenum cap) {
}

static PFNGLDISABLECLIENTSTATEPROC gl_95 = NULL;
void glDisableClientState(GLenum cap) {
}

static PFNGLENABLEVERTEXATTRIBARRAYPROC gl_96 = NULL;
void glEnableVertexAttribArray(GLuint index) {
}

static PFNGLDISABLEVERTEXATTRIBARRAYPROC gl_97 = NULL;
void glDisableVertexAttribArray(GLuint index) {
}

static PFNGLDRAWARRAYSPROC gl_98 = NULL;
void glDrawArrays(GLenum mode, GLint first, GLsizei count) {
}

static PFNGLDRAWBUFFERPROC gl_99 = NULL;
void glDrawBuffer(GLenum mode) {
}

static PFNGLDRAWBUFFERSPROC gl_100 = NULL;
void glDrawBuffers(GLsizei n, const GLenum *bufs) {
}

static PFNGLDRAWELEMENTSPROC gl_101 = NULL;
void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices) {
}

static PFNGLDRAWPIXELSPROC gl_102 = NULL;
void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *data) {
}

static PFNGLDRAWRANGEELEMENTSPROC gl_103 = NULL;
void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices) {
}

static PFNGLEDGEFLAGPROC gl_104 = NULL;
void glEdgeFlag(GLboolean flag) {
}

static PFNGLEDGEFLAGVPROC gl_105 = NULL;
void glEdgeFlagv(const GLboolean *flag) {
}

static PFNGLEDGEFLAGPOINTERPROC gl_106 = NULL;
void glEdgeFlagPointer(GLsizei stride, const GLvoid *pointer) {
}

static PFNGLENDLISTPROC gl_107 = NULL;
void glEndList() {
}

static PFNGLEVALCOORD1FPROC gl_108 = NULL;
void glEvalCoord1f(GLfloat u) {
}

static PFNGLEVALCOORD1DPROC gl_109 = NULL;
void glEvalCoord1d(GLdouble u) {
}

static PFNGLEVALCOORD2FPROC gl_110 = NULL;
void glEvalCoord2f(GLfloat u, GLfloat v) {
}

static PFNGLEVALCOORD2DPROC gl_111 = NULL;
void glEvalCoord2d(GLdouble u, GLdouble v) {
}

static PFNGLEVALCOORD1FVPROC gl_112 = NULL;
void glEvalCoord1fv(const GLfloat *u) {
}

static PFNGLEVALCOORD1DVPROC gl_113 = NULL;
void glEvalCoord1dv(const GLdouble *u) {
}

static PFNGLEVALCOORD2FVPROC gl_114 = NULL;
void glEvalCoord2fv(const GLfloat *u) {
}

static PFNGLEVALCOORD2DVPROC gl_115 = NULL;
void glEvalCoord2dv(const GLdouble *u) {
}

static PFNGLEVALMESH1PROC gl_116 = NULL;
void glEvalMesh1(GLenum mode, GLint i1, GLint i2) {
}

static PFNGLEVALMESH2PROC gl_117 = NULL;
void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2) {
}

static PFNGLEVALPOINT1PROC gl_118 = NULL;
void glEvalPoint1(GLint i) {
}

static PFNGLEVALPOINT2PROC gl_119 = NULL;
void glEvalPoint2(GLint i, GLint j) {
}

static PFNGLFEEDBACKBUFFERPROC gl_120 = NULL;
void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer) {
}

static PFNGLFINISHPROC gl_121 = NULL;
void glFinish() {
}

static PFNGLFLUSHPROC gl_122 = NULL;
void glFlush() {
}

static PFNGLFOGFPROC gl_123 = NULL;
void glFogf(GLenum pname, GLfloat param) {
}

static PFNGLFOGIPROC gl_124 = NULL;
void glFogi(GLenum pname, GLint param) {
}

static PFNGLFOGFVPROC gl_125 = NULL;
void glFogfv(GLenum pname, const GLfloat *params) {
}

static PFNGLFOGIVPROC gl_126 = NULL;
void glFogiv(GLenum pname, const GLint *params) {
}

static PFNGLFOGCOORDDPROC gl_127 = NULL;
void glFogCoordd(GLdouble coord) {
}

static PFNGLFOGCOORDFPROC gl_128 = NULL;
void glFogCoordf(GLfloat coord) {
}

static PFNGLFOGCOORDDVPROC gl_129 = NULL;
void glFogCoorddv(GLdouble *coord) {
}

static PFNGLFOGCOORDFVPROC  gl_130 = NULL;
void glFogCoordfv(GLfloat *coord) {
}

static PFNGLFOGCOORDPOINTERPROC gl_131 = NULL;
void glFogCoordPointer(GLenum type, GLsizei stride, GLvoid *pointer) {
}

static PFNGLFRONTFACEPROC gl_132 = NULL;
void glFrontFace(GLenum mode) {
}

static PFNGLFRUSTUMPROC gl_133 = NULL;
void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble nearVal, GLdouble farVal) {
}

static PFNGLGENBUFFERSPROC gl_134 = NULL;
void glGenBuffers(GLsizei n, GLuint *buffers) {
}

static PFNGLGENLISTSPROC gl_135 = NULL;
GLuint glGenLists(GLsizei range) {
}

static PFNGLGENQUERIESPROC gl_136 = NULL;
void glGenQueries(GLsizei n, GLuint *ids) {
}

static PFNGLGENTEXTURESPROC gl_137 = NULL;
void glGenTextures(GLsizei n, GLuint *textures) {
}

static PFNGLGETBOOLEANVPROC gl_138 = NULL;
void glGetBooleanv(GLenum pname, GLboolean *params) {
}

static PFNGLGETDOUBLEVPROC gl_139 = NULL;
void glGetDoublev(GLenum pname, GLdouble *params) {
}

static PFNGLGETFLOATVPROC gl_140 = NULL;
void glGetFloatv(GLenum pname, GLfloat *params) {
}

static PFNGLGETINTEGERVPROC gl_141 = NULL;
void glGetIntegerv(GLenum pname, GLint *params) {
}

static PFNGLGETACTIVEATTRIBPROC gl_142 = NULL;
void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) {
}

static PFNGLGETACTIVEUNIFORMPROC gl_143 = NULL;
void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) {
}

static PFNGLGETATTACHEDSHADERSPROC gl_144 = NULL;
void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) {
}

static PFNGLATTRIBLOCATIONPROC gl_145 = NULL;
GLint glAttribLocation(GLuint program, const GLchar *name) {
}

static PFNGLGETBUFFERPARAMETERIVPROC gl_146 = NULL;
void glGetBufferParameteriv(GLenum target, GLenum value, GLint *data) {
}

static PFNGLGETBUFFERPOINTERVPROC gl_147 = NULL;
void glGetBufferPointerv(GLenum target, GLenum pname, GLvoid **params) {
}

static PFNGLGETBUFFERSUBDATAPROC gl_148 = NULL;
void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data) {
}

static PFNGLGETCLIPPLANEPROC gl_149 = NULL;
void glGetClipPlane(GLenum plane, GLdouble *equation) {
}

static PFNGLGETCOMPRESSEDTEXIMAGEPROC gl_150 = NULL;
void glGetCompressedTexImage(GLenum target, GLint lod, GLvoid *img) {
}

static PFNGLGETERRORPROC gl_151 = NULL;
GLenum glGetError() {
}

static PFNGLGETLIGHTFVPROC gl_152 = NULL;
void glGetLightfv(GLenum light, GLenum pname, GLfloat *params) {
}

static PFNGLGETLIGHTIVPROC gl_153 = NULL;
void glGetLightiv(GLenum light, GLenum pname, GLint *params) {
}

static PFNGLGETMAPDVPROC gl_154 = NULL;
void glGetMapdv(GLenum target, GLenum query, GLdouble *v) {
}

static PFNGLGETMAPFVPROC gl_155 = NULL;
void glGetMapfv(GLenum target, GLenum query, GLfloat *v) {
}

static PFNGLGETMAPIVPROC gl_156 = NULL;
void glGetMapiv(GLenum target, GLenum query, GLint *v) {
}

static PFNGLGETMATERIALFVPROC gl_157 = NULL;
void glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params) {
}

static PFNGLGETMATERIALIVPROC gl_158 = NULL;
void glGetMaterialiv(GLenum face, GLenum pname, GLint *params) {
}

static PFNGLGETPIXELMAPFVPROC gl_159 = NULL;
void glGetPixelMapfv(GLenum map, GLfloat *data) {
}

static PFNGLGETPIXELMAPUIVPROC gl_160 = NULL;
void glGetPixelMapuiv(GLenum map, GLuint *data) {
}

static PFNGLGETPIXELMAPUSVPROC gl_161 = NULL;
void glGetPixelMapusv(GLenum map, GLushort *data) {
}

static PFNGLGETPOINTERVPROC gl_162 = NULL;
void glGetPointerv(GLenum pname, GLvoid **params) {
}

static PFNGLGETPOLYGONSTIPPLEPROC gl_163 = NULL;
void glGetPolygonStipple(GLubyte *pattern) {
}

static PFNGLGETPROGRAMIVPROC gl_164 = NULL;
void glGetProgramiv(GLuint program, GLenum pname, GLint *params) {
}

static PFNGLGETPROGRAMINFOLOGPROC gl_165 = NULL;
void glGetProgramInfoLog(GLuint program, GLsizei maxLength, GLsizei *length, GLchar *infoLog) {
}

static PFNGLGETQUERYOBJECTIVPROC gl_166 = NULL;
void glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params) {
}

static PFNGLGETQUERYOBJECTUIVPROC gl_167 = NULL;
void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params) {
}

static PFNGLGETQUERYIVPROC gl_168 = NULL;
void glGetQueryiv(GLenum target, GLenum pname, GLint *params) {
}

static PFNGLGETSHADERIVPROC gl_169 = NULL;
void glGetShaderiv(GLuint shader, GLenum pname, GLint *params) {
}

static PFNGLGETSHADERINFOLOGPROC gl_170 = NULL;
void glGetShaderInfoLog(GLuint shader, GLsizei maxLength, GLsizei *length, GLchar *infoLog) {
}

static PFNGLGETSHADERSOURCEPROC gl_171 = NULL;
void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) {
}

static PFNGLGETSTRINGPROC gl_172 = NULL;
const GLubyte *glGetString(GLenum name) {
}

static PFNGLGETTEXENVFVPROC gl_173 = NULL;
void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params) {
}

static PFNGLGETTEXENVIVPROC gl_174 = NULL;
void glGetTexEnviv(GLenum target, GLenum pname, GLint *params) {
}

static PFNGLGETTEXGENDVPROC gl_175 = NULL;
void glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params) {
}

static PFNGLGETTEXGENFVPROC gl_176 = NULL;
void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat *params) {
}

static PFNGLGETTEXGENIVPROC gl_177 = NULL;
void glGetTexGeniv(GLenum coord, GLenum pname, GLint *params) {
}

static PFNGLGETTEXIMAGEPROC gl_178 = NULL;
void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *img) {
}

static PFNGLGETTEXLEVELPARAMETERFVPROC gl_179 = NULL;
void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params) {
}

static PFNGLGETTEXLEVELPARAMETERIVPROC gl_180 = NULL;
void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params) {
}

static PFNGLGETTEXPARAMETERIVPROC gl_181 = NULL;
void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params) {
}

static PFNGLGETTEXPARAMETERIVPROC gl_182 = NULL;
void glGetTexParameteriv(GLenum target, GLenum pname, GLint *params) {
}

static PFNGLGETUNIFORMFVPROC gl_183 = NULL;
void glGetUniformfv(GLuint program, GLint location, GLfloat *params) {
}

static PFNGLGETUNIFORMIVPROC gl_184 = NULL;
void glGetUniformiv(GLuint program, GLint location, GLint *params) {
}

static PFNGLGETUNIFORMLOCATIONPROC gl_185 = NULL;
void glGetUniformLocation(GLuint program, const GLchar *name) {
}

static PFNGLGETVERTEXATTRIBDVPROC gl_186 = NULL;
void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble *params) {
}

static PFNGLGETVERTEXATTRIBFVPROC gl_187 = NULL;
void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params) {
}

static PFNGLGETVERTEXATTRIBIVPROC gl_188 = NULL;
void glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params) {
}

static PFNGLGETVERTEXATTRIBPOINTERVPROC gl_189 = NULL;
void glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid **pointer) {
}

static PFNGLHINTPROC gl_190 = NULL;
void glHint(GLenum target, GLenum mode) {
}

static PFNGLINDEXSPROC gl_191 = NULL;
void glIndexs(GLshort c) {
}

static PFNGLINDEXIPROC gl_192 = NULL;
void glIndexi(GLint c) {
}

static PFNGLINDEXFPROC gl_193 = NULL;
void glIndexf(GLfloat c) {
}

static PFNGLINDEXDPROC gl_194 = NULL;
void glIndexd(GLdouble c) {
}

static PFNGLINDEXUBPROC gl_195 = NULL;
void glIndexub(GLubyte c) {
}

static PFNGLINDEXSVPROC gl_196 = NULL;
void glIndexsv(const GLshort *c) {
}

static PFNGLINDEXIVPROC gl_197 = NULL;
void glIndexiv(const GLint *c) {
}

static PFNGLINDEXFVPROC gl_198 = NULL;
void glIndexfv(const GLfloat *c) {
}

static PFNGLINDEXDVPROC gl_199 = NULL;
void glIndexdv(const GLdouble *c) {
}

static PFNGLINDEXUBVPROC gl_200 = NULL;
void glIndexubv(const GLubyte *c) {
}

static PFNGLINDEXMASKPROC gl_201 = NULL;
void glIndexMask(GLuint mask) {
}

static PFNGLINDEXPOINTERPROC gl_202 = NULL;
void glIndexPointer(GLenum type, GLsizei stride, const GLvoid *pointer) {
}

static PFNGLINITNAMESPROC gl_203 = NULL;
void glInitNames() {
}

static PFNGLINTERLEAVEDARRAYSPROC gl_204 = NULL;
void glInterleavedArrays(GLenum format, GLsizei stride, const GLvoid *pointer) {
}

static PFNGLISBUFFERPROC gl_205 = NULL;
GLboolean glIsBuffer(GLuint buffer) {
}

static PFNGLISENABLEDPROC gl_206 = NULL;
GLboolean glIsEnabled(GLenum cap) {
}

static PFNGLISLISTPROC gl_207 = NULL;
GLboolean glIsList(GLuint list) {
}

static PFNGLISPROGRAMPROC gl_208 = NULL;
GLboolean glIsProgram(GLuint program) {
}

static PFNGLISQUERYPROC gl_209 = NULL;
GLboolean glIsQuery(GLuint id) {
}

static PFNGLISSHADERPROC gl_210 = NULL;
GLboolean glIsShader(GLuint shader) {
}

static PFNGLISTEXTUREPROC gl_211 = NULL;
GLboolean glIsTexture(GLuint texture) {
}

static PFNGLLIGHTFPROC gl_212 = NULL;
void glLightf(GLenum light, GLenum pname, GLfloat param) {
}

static PFNGLLIGHTIPROC gl_213 = NULL;
void glLighti(GLenum light, GLenum pname, GLint param) {
}

static PFNGLLIGHTFVPROC gl_214 = NULL;
void glLightfv(GLenum light, GLenum pname, const GLfloat *params) {
}

static PFNGLLIGHTIVPROC gl_215 = NULL;
void glLightiv(GLenum light, GLenum pname, const GLint *params) {
}

static PFNGLLIGHTMODELFPROC gl_216 = NULL;
void glLightModelf(GLenum pname, GLfloat param) {
}

static PFNGLLIGHTMODELIPROC gl_217 = NULL;
void glLightModeli(GLenum pname, GLint param) {
}

static PFNGLLIGHTMODELFVPROC gl_218 = NULL;
void glLightModelfv(GLenum pnanme, const GLfloat *params) {
}

static PFNGLLIGHTMODELIVPROC gl_219 = NULL;
void glLightModeliv(GLenum pname, const GLint *params) {
}

static PFNGLLINESTIPPLEPROC gl_220 = NULL;
void glLineStipple(GLint factor, GLushort pattern) {
}

static PFNGLLINEWIDTHPROC gl_221 = NULL;
void glLineWidth(GLfloat width) {
}

static PFNGLLINKPROGRAMPROC gl_222 = NULL;
void glLinkProgram(GLuint program) {
}

static PFNGLLISTBASEPROC gl_223 = NULL;
void glListBase(GLuint base) {
}

static PFNGLLOADIDENTITYPROC gl_224 = NULL;
void glLoadIdentity() {
}

static PFNGLLOADMATRIXDPROC gl_225 = NULL;
void glLoadMatrixd(const GLdouble *m) {
}

static PFNGLLOADMATRIXFPROC gl_226 = NULL;
void glLoadMatrixf(const GLfloat *m) {
}

static PFNGLLOADNAMEPROC gl_227 = NULL;
void glLoadName(GLuint name) {
}

static PFNGLLOADTRANSPOSEMATRIXDPROC gl_228 = NULL;
void glLoadTransposeMatrixd(const GLdouble *m) {
}

static PFNGLLOADTRANSPOSEMATRIXFPROC gl_229 = NULL;
void glLoadTransposeMatrixf(const GLfloat *m) {
}

static PFNGLLOGICOPPROC gl_230 = NULL;
void glLogicOp(GLenum opcode) {
}

static PFNGLMAP1FPROC gl_231 = NULL;
void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points) {
}

static PFNGLMAP1DPROC gl_232 = NULL;
void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points) {
}

static PFNGLMAP2FPROC gl_233 = NULL;
void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points) {
}

static PFNGLMAP2DPROC gl_234 = NULL;
void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points) {
}

static PFNGLMAPBUFFERPROC gl_235 = NULL;
void* glMapBuffer(GLenum target, GLenum access) {
}

static PFNGLUNMAPBUFFERPROC gl_236 = NULL;
GLboolean glUnmapBuffer(GLenum target) {
}

static PFNGLMAPGRID1DPROC gl_237 = NULL;
void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2) {
}

static PFNGLMAPGRID1FPROC gl_238 = NULL;
void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2) {
}

static PFNGLMAPGRID2DPROC gl_239 = NULL;
void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2) {
}

static PFNGLMAPGRID2FPROC gl_240 = NULL;
void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2) {
}

static PFNGLMATERIALFPROC gl_241 = NULL;
void glMaterialf(GLenum face, GLenum pname, GLfloat param) {
}

static PFNGLMATERIALIPROC gl_242 = NULL;
void glMateriali(GLenum face, GLenum pname, GLint param) {
}

static PFNGLMATERIALFVPROC gl_243 = NULL;
void glMaterialfv(GLenum face, GLenum pname, const GLfloat *params) {
}

static PFNGLMATERIALIVPROC gl_244 = NULL;
void glMaterialiv(GLenum face, GLenum pname, const GLint *params) {
}

static PFNGLMATRIXMODEPROC gl_245 = NULL;
void glMatrixMode(GLenum mode) {
}

static PFNGLMULTMATRIXDPROC gl_246 = NULL;
void glMultMatrixd(const GLdouble *m) {
}

static PFNGLMULTMATRIXFPROC gl_247 = NULL;
void glMultMatrixf(const GLfloat *m) {
}

static PFNGLMULTTRANSPOSEMATRIXDPROC gl_248 = NULL;
void glMultTransposeMatrixd(const GLdouble *m) {
}

static PFNGLMULTTRANSPOSEMATRIXFPROC gl_249 = NULL;
void glMultTransposeMatrixf(const GLfloat *m) {
}

static PFNGLMULTIDRAWARRAYSPROC gl_250 = NULL;
void glMultiDrawArrays(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount) {
}

static PFNGLMULTIDRAWELEMENTSPROC gl_251 = NULL;
void glMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const GLvoid **indices, GLsizei primcount) {
}

static PFNGLMULTITEXCOORD1SPROC gl_252 = NULL;
void glMultiTexCoord1s(GLenum target, GLshort s) {
}

static PFNGLMULTITEXCOORD1IPROC gl_253 = NULL;
void glMultiTexCoord1i(GLenum target, GLint s) {
}

static PFNGLMULTITEXCOORD1FPROC gl_254 = NULL;
void glMultiTexCoord1f(GLenum target, GLfloat s) {
}

static PFNGLMULTITEXCOORD1DPROC gl_255 = NULL;
void glMultiTexCoord1d(GLenum target, GLdouble s) {
}

static PFNGLMULTITEXCOORD2SPROC gl_256 = NULL;
void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t) {
}

static PFNGLMULTITEXCOORD2IPROC gl_257 = NULL;
void glMultiTexCoord2i(GLenum target, GLint s, GLint t) {
}

static PFNGLMULTITEXCOORD2FPROC gl_258 = NULL;
void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t) {
}

static PFNGLMULTITEXCOORD2DPROC gl_259 = NULL;
void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t) {
}

static PFNGLMULTITEXCOORD3SPROC gl_260 = NULL;
void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r) {
}

static PFNGLMULTITEXCOORD3IPROC gl_261 = NULL;
void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r) {
}

static PFNGLMULTITEXCOORD3FPROC gl_262 = NULL;
void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r) {
}

static PFNGLMULTITEXCOORD3DPROC gl_263 = NULL;
void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r) {
}

static PFNGLMULTITEXCOORD4SPROC gl_264 = NULL;
void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) {
}

static PFNGLMULTITEXCOORD4IPROC gl_265 = NULL;
void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q) {
}

static PFNGLMULTITEXCOORD4FPROC gl_266 = NULL;
void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
}

static PFNGLMULTITEXCOORD4DPROC gl_267 = NULL;
void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
}

static PFNGLMULTITEXCOORD1SVPROC gl_268 = NULL;
void glMultiTexCoord1sv(GLenum target, const GLshort *v) {
}

static PFNGLMULTITEXCOORD1IVPROC gl_269 = NULL;
void glMultiTexCoord1iv(GLenum target, const GLint *v) {
}

static PFNGLMULTITEXCOORD1FVPROC gl_270 = NULL;
void glMultiTexCoord1fv(GLenum target, const GLfloat *v) {
}

static PFNGLMULTITEXCOORD1DVPROC gl_271 = NULL;
void glMultiTexCoord1dv(GLenum target, const GLdouble *v) {
}

static PFNGLMULTITEXCOORD2SVPROC gl_272 = NULL;
void glMultiTexCoord2sv(GLenum target, const GLshort *v) {
}

static PFNGLMULTITEXCOORD2SVPROC gl_273 = NULL;
void glMultiTexCoord2iv(GLenum target, const GLint *v) {
}

static PFNGLMULTITEXCOORD2FVPROC gl_274 = NULL;
void glMultiTexCoord2fv(GLenum target, const GLfloat *v) {
}

static PFNGLMULTITEXCOORD2DVPROC gl_275 = NULL;
void glMultiTexCoord2dv(GLenum target, const GLdouble *v) {
}

static PFNGLMULTITEXCOORD3SVPROC gl_276 = NULL;
void glMultiTexCoord3sv(GLenum target, const GLshort *v) {
}

static PFNGLMULTITEXCOORD3IVPROC gl_277 = NULL;
void glMultiTexCoord3iv(GLenum target, const GLint *v) {
}

static PFNGLMULTITEXCOORD3FVPROC gl_278 = NULL;
void glMultiTexCoord3fv(GLenum target, const GLfloat *v) {
}

static PFNGLMULTITEXCOORD3DVPROC gl_279 = NULL;
void glMultiTexCoord3dv(GLenum target, const GLdouble *v) {
}

static PFNGLMULTITEXCOORD4SVPROC gl_280 = NULL;
void glMultiTexCoord4sv(GLenum target, const GLshort *v) {
}

static PFNGLMULTITEXCOORD4IVPROC gl_281 = NULL;
void glMultiTexCoord4iv(GLenum target, const GLint *v) {
}

static PFNGLMULTITEXCOORD4FVPROC gl_282 = NULL;
void glMultiTexCoord4fv(GLenum target, const GLfloat *v) {
}

static PFNGLMULTITEXCOORD4DVPROC gl_283 = NULL;
void glMultiTexCoord4dv(GLenum target, const GLdouble *v) {
}

static PFNGLNEWLISTPROC gl_284 = NULL;
void glNewList(GLuint list, GLenum mode) {
}

static PFNGLNORMAL3BPROC gl_285 = NULL;
void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz) {
}

static PFNGLNORMAL3DPROC gl_286 = NULL;
void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz) {
}

static PFNGLNORMAL3FPROC gl_287 = NULL;
void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) {
}

static PFNGLNORMAL3IPROC gl_288 = NULL;
void glNormal3i(GLint nx, GLint ny, GLint nz) {
}

static PFNGLNORMAL3SPROC gl_289 = NULL;
void glNormal3s(GLshort nx, GLshort ny, GLshort nz) {
}

static PFNGLNORMAL3BVPROC gl_290 = NULL;
void glNormal3bv(const GLbyte *v) {
}

static PFNGLNORMAL3DVPROC gl_291 = NULL;
void glNormal3dv(const GLdouble *v) {
}

static PFNGLNORMAL3FVPROC gl_292 = NULL;
void glNormal3fv(const GLfloat *v) {
}

static PFNGLNORMAL3IVPROC gl_293 = NULL;
void glNormal3iv(const GLint *v) {
}

static PFNGLNORMAL3SVPROC gl_294 = NULL;
void glNormal3sv(const GLshort *v) {
}

static PFNGLNORMALPOINTERPROC gl_295 = NULL;
void glNormalPointer(GLenum type, GLsizei stride, const GLvoid *pointer) {
}

static PFNGLORTHOPROC gl_296 = NULL;
void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble nearVal, GLdouble farVal) {
}

static PFNGLPASSTHROUGHPROC gl_297 = NULL;
void glPassThrough(GLfloat token) {
}

static PFNGLPIXELMAPFVPROC gl_298 = NULL;
void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values) {
}

static PFNGLPIXELMAPUIVPROC gl_299 = NULL;
void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint *values) {
}

static PFNGLPIXELMAPUSVPROC gl_300 = NULL;
void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort *values) {
}

static PFNGLPIXELSTOREFPROC gl_301 = NULL;
void glPixelStoref(GLenum pname, GLfloat param) {
}

static PFNGLPIXELSTOREIPROC gl_302 = NULL;
void glPixelStorei(GLenum pname, GLint param) {
}

static PFNGLPIXELTRANSFERFPROC gl_303 = NULL;
void glPixelTransferf(GLenum pname, GLfloat param) {
}

static PFNGLPIXELTRANSFERIPROC gl_304 = NULL;
void glPixelTransferi(GLenum pname, GLint param) {
}

static PFNGLPIXELZOOMPROC gl_305 = NULL;
void glPixelZoom(GLfloat xfactor, GLfloat yfactor) {
}

static PFNGLPOINTPARAMETERFPROC gl_306 = NULL;
void glPointParameterf(GLenum pname, GLfloat param) {
}

static PFNGLPOINTPARAMETERIPROC gl_307 = NULL;
void glPointParameteri(GLenum pname, GLint param) {
}

static PFNGLPOINTPARAMETERFVPROC gl_308 = NULL;
void glPointParameterfv(GLenum pname, const GLfloat *params) {
}

static PFNGLPOINTPARAMETERIVPROC gl_309 = NULL;
void glPointParameteriv(GLenum pname, const GLint *params) {
}

static PFNGLPOINTSIZEPROC gl_310 = NULL;
void glPointSize(GLfloat size) {
}

static PFNGLPOLYGONMODEPROC gl_311 = NULL;
void glPolygonMode(GLenum face, GLenum mode) {
}

static PFNGLPOLYGONOFFSETPROC gl_312 = NULL;
void glPolygonOffset(GLfloat factor, GLfloat units) {
}

static PFNGLPOLYGONSTIPPLEPROC gl_313 = NULL;
void glPolygonStipple(const GLubyte *pattern) {
}

static PFNGLPUSHATTRIBPROC gl_314 = NULL;
void glPushAttrib(GLbitfield mask) {
}

static PFNGLPOPATTRIBPROC gl_315 = NULL;
void glPopAttrib() {
}

static PFNGLPUSHCLIENTATTRIBPROC gl_316 = NULL;
void glPushClientAttrib(GLbitfield mask) {
}

static PFNGLPOPCLIENTATTRIBPROC gl_317 = NULL;
void glPopClientAttrib() {
}

static PFNGLPUSHMATRIXPROC gl_318 = NULL;
void glPushMatrix() {
}

static PFNGLPOPMATRIXPROC gl_319 = NULL;
void glPopMatrix() {
}

static PFNGLPUSHNAMEPROC gl_320 = NULL;
void glPushName(GLuint name) {
}

static PFNGLPOPNAMEPROC gl_321 = NULL;
void glPopName() {
}

static PFNGLPRIORITIZETEXTURESPROC gl_322 = NULL;
void glPrioritizeTextures(GLsizei n, const GLuint *textures, const GLclampf *priorities) {
}

static PFNGLRASTERPOS2SPROC gl_323 = NULL;
void glRasterPos2s(GLshort x, GLshort y) {
}

static PFNGLRASTERPOS2IPROC gl_324 = NULL;
void glRasterPos2i(GLint x, GLint y) {
}

static PFNGLRASTERPOS2FPROC gl_325 = NULL;
void glRasterPos2f(GLfloat x, GLfloat y) {
}

static PFNGLRASTERPOS2DPROC gl_326 = NULL;
void glRasterPos2d(GLdouble x, GLdouble y) {
}

static PFNGLRASTERPOS3SPROC gl_327 = NULL;
void glRasterPos3s(GLshort x, GLshort y, GLshort z) {
}

static PFNGLRASTERPOS3IPROC gl_328 = NULL;
void glRasterPos3i(GLint x, GLint y, GLint z) {
}

static PFNGLRASTERPOS3FPROC gl_329 = NULL;
void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z) {
}

static PFNGLRASTERPOS3DPROC gl_330 = NULL;
void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z) {
}

static PFNGLRASTERPOS4SPROC gl_331 = NULL;
void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w) {
}

static PFNGLRASTERPOS4IPROC gl_332 = NULL;
void glRasterPos4i(GLint x, GLint y, GLint z, GLint w) {
}

static PFNGLRASTERPOS4FPROC gl_333 = NULL;
void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}

static PFNGLRASTERPOS4DPROC gl_334 = NULL;
void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}

static PFNGLRASTERPOS2SVPROC gl_335 = NULL;
void glRasterPos2sv(const GLshort *v) {
}

static PFNGLRASTERPOS2IVPROC gl_336 = NULL;
void glRasterPos2iv(const GLint *v) {
}

static PFNGLRASTERPOS2FVPROC gl_337 = NULL;
void glRasterPos2fv(const GLfloat *v) {
}

static PFNGLRASTERPOS2DVPROC gl_338 = NULL;
void glRasterPos2dv(const GLdouble *v) {
}

static PFNGLRASTERPOS3SVPROC gl_339 = NULL;
void glRasterPos3sv(const GLshort *v) {
}

static PFNGLRASTERPOS3IVPROC gl_340 = NULL;
void glRasterPos3iv(const GLint *v) {
}

static PFNGLRASTERPOS3FVPROC gl_341 = NULL;
void glRasterPos3fv(const GLfloat *v) {
}

static PFNGLRASTERPOS3DVPROC gl_342 = NULL;
void glRasterPos3dv(const GLdouble *v) {
}

static PFNGLRASTERPOS4SVPROC gl_343 = NULL;
void glRasterPos4sv(const GLshort *v) {
}

static PFNGLRASTERPOS4IVPROC gl_344 = NULL;
void glRasterPos4iv(const GLint *v) {
}

static PFNGLRASTERPOS4FVPROC gl_345 = NULL;
void glRasterPos4fv(const GLfloat *v) {
}

static PFNGLRASTERPOS4DVPROC gl_346 = NULL;
void glRasterPos4dv(const GLdouble *v) {
}

static PFNGLREADBUFFERPROC gl_347 = NULL;
void glReadBuffer(GLenum mode) {
}

static PFNGLREADPIXELSPROC gl_348 = NULL;
void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *data) {
}

static PFNGLRECTDPROC gl_349 = NULL;
void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2) {
}

static PFNGLRECTFPROC gl_350 = NULL;
void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2) {
}

static PFNGLRECTIPROC gl_351 = NULL;
void glRecti(GLint x1, GLint y1, GLint x2, GLint y2) {
}

static PFNGLRECTSPROC gl_352 = NULL;
void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2) {
}

static PFNGLRECTDVPROC gl_353 = NULL;
void glRectdv(const GLdouble *v1, const GLdouble* v2) {
}

static PFNGLRECTFVPROC gl_354 = NULL;
void glRectfv(const GLfloat *v1, const GLfloat *v2) {
}

static PFNGLRECTIVPROC gl_355 = NULL;
void glRectiv(const GLint *v1, const GLint *v2) {
}

static PFNGLRECTIVPROC gl_356 = NULL;
void glRectsv(const GLshort *v1, const GLshort *v2) {
}

static PFNGLRENDERMODEPROC gl_357 = NULL;
GLint glRenderMode(GLenum mode) {
}

static PFNGLROTATEDPROC gl_358 = NULL;
void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z) {
}

static PFNGLROTATEFPROC gl_359 = NULL;
void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
}

static PFNGLSAMPLECOVERAGEPROC gl_360 = NULL;
void glSampleCoverage(GLclampf value, GLboolean invert) {
}

static PFNGLSCALEDPROC gl_361 = NULL;
void glScaled(GLdouble x, GLdouble y, GLdouble z) {
}

static PFNGLSCALEFPROC gl_362 = NULL;
void glScalef(GLfloat x, GLfloat y, GLfloat z) {
}

static PFNGLSCISSORPROC gl_363 = NULL;
void glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
}

static PFNGLSECONDARYCOLOR3BPROC gl_364 = NULL;
void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue) {
}

static PFNGLSECONDARYCOLOR3SPROC gl_365 = NULL;
void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue) {
}

static PFNGLSECONDARYCOLOR3IPROC gl_366 = NULL;
void glSecondaryColor3i(GLint red, GLint green, GLint blue) {
}

static PFNGLSECONDARYCOLOR3FPROC gl_367 = NULL;
void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue) {
}

static PFNGLSECONDARYCOLOR3DPROC gl_368 = NULL;
void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue) {
}

static PFNGLSECONDARYCOLOR3UBPROC gl_369 = NULL;
void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue) {
}

static PFNGLSECONDARYCOLOR3USPROC gl_370 = NULL;
void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue) {
}

static PFNGLSECONDARYCOLOR3UIPROC gl_371 = NULL;
void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue) {
}

static PFNGLSECONDARYCOLOR3BVPROC gl_372 = NULL;
void glSecondaryColor3bv(const GLbyte *v) {
}

static PFNGLSECONDARYCOLOR3SVPROC gl_373 = NULL;
void glSecondaryColor3sv(const GLshort *v) {
}

static PFNGLSECONDARYCOLOR3IVPROC gl_374 = NULL;
void glSecondaryColor3iv(const GLint *v) {
}

static PFNGLSECONDARYCOLOR3FVPROC gl_375 = NULL;
void glSecondaryColor3fv(const GLfloat *v) {
}

static PFNGLSECONDARYCOLOR3DVPROC gl_376 = NULL;
void glSecondaryColor3dv(const GLdouble *v) {
}

static PFNGLSECONDARYCOLOR3UBVPROC gl_377 = NULL;
void glSecondaryColor3ubv(const GLubyte *v) {
}

static PFNGLSECONDARYCOLOR3USVPROC gl_378 = NULL;
void glSecondaryColor3usv(const GLushort *v) {
}

static PFNGLSECONDARYCOLOR3UIVPROC gl_379 = NULL;
void glSecondaryColor3uiv(const GLuint *v) {
}

static PFNGLSECONDARYCOLORPOINTERPROC gl_380 = NULL;
void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}

static PFNGLSELECTBUFFERPROC gl_381 = NULL;
void glSelectBuffer(GLsizei size, GLuint *buffer) {
}

static PFNGLSHADEMODELPROC gl_382 = NULL;
void glShadeModel(GLenum mode) {
}

static PFNGLSHADERSOURCEPROC gl_383 = NULL;
void glShaderSource(GLuint shader, GLsizei count, const GLchar **string, const GLint *length) {
}

static PFNGLSTENCILFUNCPROC gl_384 = NULL;
void glStencilFunc(GLenum func, GLint ref, GLuint mask) {
}

static PFNGLSTENCILFUNCSEPARATEPROC gl_385 = NULL;
void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) {
}

static PFNGLSTENCILMASKPROC gl_386 = NULL;
void glStencilMask(GLuint mask) {
}

static PFNGLSTENCILMASKSEPARATEPROC gl_387 = NULL;
void glStencilMaskSeparate(GLenum face, GLuint mask) {
}

static PFNGLSTENCILOPPROC gl_388 = NULL;
void glStencilOp(GLenum sfail, GLenum dpfail, GLenum dppass) {
}

static PFNGLSTENCILOPSEPARATEPROC gl_389 = NULL;
void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
}

static PFNGLTEXCOORD1SPROC gl_390 = NULL;
void glTexCoord1s(GLshort s) {
}

static PFNGLTEXCOORD1IPROC gl_391 = NULL;
void glTexCoord1i(GLint s) {
}

static PFNGLTEXCOORD1FPROC gl_392 = NULL;
void glTexCoord1f(GLfloat s) {
}

static PFNGLTEXCOORD1DPROC gl_393 = NULL;
void glTexCoord1d(GLdouble s) {
}

static PFNGLTEXCOORD2SPROC gl_394 = NULL;
void glTexCoord2s(GLshort s, GLshort t) {
}

static PFNGLTEXCOORD2IPROC gl_395 = NULL;
void glTexCoord2i(GLint s, GLint t) {
}

static PFNGLTEXCOORD2FPROC gl_396 = NULL;
void glTexCoord2f(GLfloat s, GLfloat t) {
}

static PFNGLTEXCOORD2DPROC gl_397 = NULL;
void glTexCoord2d(GLdouble s, GLdouble t) {
}

static PFNGLTEXCOORD3SPROC gl_398 = NULL;
void glTexCoord3s(GLshort s, GLshort t, GLshort r) {
}

static PFNGLTEXCOORD3IPROC gl_399 = NULL;
void glTexCoord3i(GLint s, GLint t, GLint r) {
}

static PFNGLTEXCOORD3FPROC gl_400 = NULL;
void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r) {
}

static PFNGLTEXCOORD3DPROC gl_401 = NULL;
void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r) {
}

static PFNGLTEXCOORD4SPROC gl_402 = NULL;
void glTexCoord4s(GLshort s, GLshort y, GLshort r, GLshort q) {
}

static PFNGLTEXCOORD4IPROC gl_403 = NULL;
void glTexCoord4i(GLint s, GLint t, GLint r, GLint q) {
}

static PFNGLTEXCOORD4FPROC gl_404 = NULL;
void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
}

static PFNGLTEXCOORD4DPROC gl_405 = NULL;
void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
}

static PFNGLTEXCOORD1SVPROC gl_406 = NULL;
void glTexCoord1sv(const GLshort *v) {
}

static PFNGLTEXCOORD1IVPROC gl_407 = NULL;
void glTexCoord1iv(const GLint *v) {
}

static PFNGLTEXCOORD1FVPROC gl_408 = NULL;
void glTexCoord1fv(const GLfloat *v) {
}

static PFNGLTEXCOORD1DVPROC gl_409 = NULL;
void glTexCoord1dv(const GLdouble *v) {
}

static PFNGLTEXCOORD2SVPROC gl_410 = NULL;
void glTexCoord2sv(const GLshort *v) {
}

static PFNGLTEXCOORD2IVPROC gl_411 = NULL;
void glTexCoord2iv(const GLint *v) {
}

static PFNGLTEXCOORD2FVPROC gl_412 = NULL;
void glTexCoord2fv(const GLfloat *v) {
}

static PFNGLTEXCOORD2DVPROC gl_413 = NULL;
void glTexCoord2dv(const GLdouble *v) {
}

static PFNGLTEXCOORD3SVPROC gl_414 = NULL;
void glTexCoord3sv(const GLshort *v) {
}

static PFNGLTEXCOORD3IVPROC gl_415 = NULL;
void glTexCoord3iv(const GLint *v) {
}

static PFNGLTEXCOORD3FVPROC gl_416 = NULL;
void glTexCoord3fv(const GLfloat *v) {
}

static PFNGLTEXCOORD3DVPROC gl_417 = NULL;
void glTexCoord3dv(const GLdouble *v) {
}
void glTexCoord4sv(const GLshort *v) {
}
void glTexCoord4iv(const GLint *v) {
}
void glTexCoord4fv(const GLfloat *v) {
}
void gltexCoord4dv(const GLdouble *v) {
}
void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
void glTexEnvf(GLenum target, GLenum pname, GLfloat param) {
}
void glTexEnvi(GLenum target, GLenum pname, GLint param) {
}
void glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params) {
}
void glTexEnviv(GLenum target, GLenum pname, const GLint *params) {
}
void glTexGeni(GLenum coord, GLenum pname, GLint param) {
}
void glTexGenf(GLenum coord, GLenum pname, GLfloat param) {
}
void glTexGend(GLenum coord, GLenum pname, GLdouble param) {
}
void glTexGeniv(GLenum coord, GLenum pname, const GLint *params) {
}
void glTexGenfv(GLenum coord, GLenum pname, const GLfloat *params) {
}
void glTexGendv(GLenum coord, GLenum pname, const GLdouble *params) {
}
void glTexImage1d(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *data) {
}
void glTexImage2d(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *data) {
}
void glTexImage3d(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *data) {
}
void glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
}
void glTexParameteri(GLenum target, GLenum pname, GLint param) {
}
void glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params) {
}
void glTexParameteriv(GLenum target, GLenum pname, const GLint *params) {
}
void glTexSubImage1d(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *data) {
}
void glTexSubImage2d(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *data) {
}
void glTexSubImage3d(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *data) {
}
void glTranslated(GLdouble x, GLdouble y, GLdouble z) {
}
void glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
}
void glUniform1f(GLint location, GLfloat v0) {
}
void glUniform2f(GLint location, GLfloat v0, GLfloat v1) {
}
void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
}
void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
}
void glUniform1i(GLint location, GLint v0) {
}
void glUniform2i(GLint location, GLint v0, GLint v1) {
}
void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) {
}
void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
}
void glUniform1fv(GLint location, GLsizei count, const GLfloat *value) {
}
void glUniform2fv(GLint location, GLsizei count, const GLfloat *value) {
}
void glUniform3fv(GLint location, GLsizei count, const GLfloat *value) {
}
void glUniform4fv(GLint location, GLsizei count, const GLfloat *value) {
}
void glUniform1iv(GLint location, GLsizei count, const GLint *value) {
}
void glUniform2iv(GLint location, GLsizei count, const GLint *value) {
}
void glUniform3iv(GLint location, GLsizei count, const GLint *value) {
}
void glUniform4iv(GLint location, GLsizei count, const GLint *value) {
}
void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glUseProgram(GLuint program) {
}
void glValidateProgram(GLuint program) {
}
void glVertex2s(GLshort x, GLshort y) {
}
void glVertex2i(GLint x, GLint y) {
}
void glVertex2f(GLfloat x, GLfloat y) {
}
void glVertex2d(GLdouble x, GLdouble y) {
}
void glVertex3s(GLshort x, GLshort y, GLshort z) {
}
void glVertex3i(GLint x, GLint y, GLint z) {
}
void glVertex3f(GLfloat x, GLfloat y, GLfloat z) {
}
void glVertex3d(GLdouble x, GLdouble y, GLdouble z) {
}
void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w) {
}
void glVertex4i(GLint x, GLint y, GLint z, GLint w) {
}
void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
void glVertex2sv(const GLshort *v) {
}
void glVertex2iv(const GLint *v) {
}
void glVertex2fv(const GLfloat *v) {
}
void glVertex2dv(const GLdouble *v) {
}
void glVertex3sv(const GLshort *v) {
}
void glVertex3iv(const GLint *v) {
}
void glVertex3fv(const GLfloat *v) {
}
void glVertex3dv(const GLdouble *v) {
}
void glVertex4sv(const GLshort *v) {
}
void glVertex4iv(const GLint *v) {
}
void glVertex4fv(const GLfloat *v) {
}
void glVertex4dv(const GLdouble *v) {
}
void glVertexAttrib1f(GLuint index, GLfloat v0) {
}
void glVertexAttrib1s(GLuint index, GLshort v0) {
}
void glVertexAttrib1d(GLuint index, GLdouble v0) {
}
void glVertexAttrib2f(GLuint index, GLfloat v0, GLfloat v1) {
}
void glVertexAttrib2s(GLuint index, GLshort v0, GLshort v1) {
}
void glVertexAttrib2d(GLuint index, GLdouble v0, GLdouble v1) {
}
void glVertexAttrib3f(GLuint index, GLfloat v0, GLfloat v1, GLfloat v2) {
}
void glVertexAttrib3s(GLuint index, GLshort v0, GLshort v1, GLshort v2) {
}
void glVertexAttrib3d(GLuint index, GLdouble v0, GLdouble v1, GLdouble v2) {
}
void glVertexAttrib4f(GLuint index, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
}
void glVertexAttrib4s(GLuint index, GLshort v0, GLshort v1, GLshort v2, GLshort v3) {
}
void glVertexAttrib4d(GLuint index, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) {
}
void glVertexAttrib4Nub(GLuint index, GLubyte v0, GLubyte v1, GLubyte v2, GLubyte v3) {
}
void glVertexAttrib1fv(GLuint index, const GLfloat *v) {
}
void glVertexAttrib1sv(GLuint index, const GLshort *v) {
}
void glVertexAttrib1dv(GLuint index, const GLdouble *v) {
}
void glVertexAttrib2v(GLuint index, const GLfloat *v) {
}
void glVertexAttrib2sv(GLuint index, const GLshort *v) {
}
void glVertexAttrib2dv(GLuint index, const GLdouble *v) {
}
void glVertexAttrib3fv(GLuint index, const GLfloat *v) {
}
void glVertexAttrib3sv(GLuint index, const GLshort *v) {
}
void glVertexAttrib3dv(GLuint index, const GLdouble *v) {
}
void glVertexAttrib4fv(GLuint index, const GLfloat *v) {
}
void glVertexAttrib4sv(GLuint index, const GLshort *v) {
}
void glVertexAttrib4dv(GLuint index, const GLdouble *v) {
}
void glVertexAttrib4iv(GLuint index, const GLint *v) {
}
void glVertexAttrib4bv(GLuint index, const GLbyte *v) {
}
void glVertexAttrib4ubv(GLuint index, const GLubyte *v) {
}
void glVertexAttrib4usv(GLuint index, const GLushort *v) {
}
void glVertexAttrib4uiv(GLuint index, const GLuint *v) {
}
void glVertexAttriv4Nbv(GLuint index, const GLbyte *v) {
}
void glVertexAttrib4Nsv(GLuint index, const GLshort *v) {
}
void glVertexAttrib4Niv(GLuint index, const GLint *v) {
}
void glVertexAttribNubv(GLuint index, const GLubyte *v) {
}
void glVertexAttribNusv(GLuint index, const GLushort *v) {
}
void glVertexAttribNuiv(GLuint index, const GLuint *v) {
}
void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer) {
}
void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
}
void glWindowPos2s(GLshort x, GLshort y) {
}
void glWindowPos2i(GLint x, GLint y) {
}
void glWindowPos2f(GLfloat x, GLfloat y) {
}
void glWindowPos2d(GLdouble x, GLdouble y) {
}
void glWindowPos3s(GLshort x, GLshort y, GLshort z) {
}
void glWindowPos3i(GLint x, GLint y, GLint z) {
}
void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z) {
}
void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z) {
}
void glWindowPos2sv(const GLshort *v) {
}
void glWindowPos2iv(const GLint *v) {
}
void glWindowPos2fv(const GLfloat *v) {
}
void glWindowPos2dv(const GLdouble *v) {
}
void glWindowPos3sv(const GLshort *v) {
}
void glWindowPos3iv(const GLint *v) {
}
void glWindowPos3fv(const GLfloat *v) {
}
void glWindowPos3dv(const GLdouble *v) {
}
void glBeginConditionalRender(GLuint id, GLenum mode) {
}
void glBeginTransformFeedback(GLenum primitiveMode) {
}
void glEndTransformFeedback() {
}
void glBindBufferBase(GLenum target, GLuint index, GLuint buffer) {
}
void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
void glBindFragDataLocation(GLuint program, GLuint colorNumber, const char *name) {
}
void glBindFramebuffer(GLenum target, GLuint framebuffer) {
}
void glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
}
void glBindVertexArray(GLuint array) {
}
void glBlitFramebuffer(GLint srcx0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
}
GLenum glCheckFramebufferStatus(GLenum target) {
}
void glClampColor(GLenum target, GLenum clamp) {
}
void glClearBufferiv(GLenum buffer, GLint drawBuffer, const GLint *value) {
}
void glClearBufferuiv(GLenum buffer, GLint drawBuffer, const GLuint *value) {
}
void glClearBufferfv(GLenum buffer, GLint drawBuffer, const GLfloat *value) {
}
void glClearBufferfi(GLenum buffer, GLint drawBuffer, GLfloat depth, GLint stencil) {
}
void glDeleteFramebuffers(GLsizei n, GLuint *framebuffers) {
}
void glDeleteRenderbuffers(GLsizei n, GLuint *renderbuffers) {
}
void glDeleteVertexArrays(GLsizei n, const GLuint *arrays) {
}
void glEndConditionalRender() {
}
void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) {
}
void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
}
void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) {
}
void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
}
void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
}
void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint layer) {
}
void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
}
void glGenFramebuffers(GLsizei n, GLuint *ids) {
}
void glGenRenderbuffers(GLsizei n, GLuint *renderbuffers) {
}
void glGenVertexArrays(GLsizei n, GLuint *arrays) {
}
void glGenerateMipmap(GLenum target) {
}
void glGetFragDataLocation(GLuint program, const char *name) {
}
void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params) {
}
void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params) {
}
void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei *length, GLsizei *size, GLenum *type, char *name) {
}
GLboolean glIsFramebuffer(GLuint framebuffer) {
}
GLboolean glIsRenderbuffer(GLuint renderbuffer) {
}
GLboolean glIsVertexArray(GLuint array) {
}
void* glMapBufferRaneg(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
}
void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
}
void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
}
void glTransformFeedbackVaryings(GLuint program, GLsizei count, const char **varyings, GLenum bufferMod) {
}
void glCopyBufferSubData(GLenum readtarget, GLenum writetarget, GLintptr readoffset, GLintptr writeoffset, GLsizeiptr size) {
}
void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei primcount) {
}
void glDrawElementsInstanced(GLenum mode, GLsizei count, const void *indices, GLsizei primcount) {
}
void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) {
}
void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *unniformBlockName) {
}
void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName) {
}
void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pnname, GLint *param) {
}
GLuint glGetUniformBlockIndex(GLuint program, const GLchar *uniformBlockName) {
}
GLuint glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar **uniformNames, GLuint *uniformIndices) {
}
void glPrimitiveRestartIndex(GLuint index) {
}
void glTexBuffer(GLenum target, GLenum internalFormat, GLuint buffer) {
}
void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) {
}
GLenum glClientWaitSync(GLsync syn, GLbitfield flags, GLuint64 timeout) {
}
void glDeleteSync(GLsync sync) {
}
void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, GLvoid *indices, GLint basevertex) {
}
void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, GLvoid *indices, GLsizei primcount, GLint basevertex) {
}
void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, GLvoid *indices, GLint basevertex) {
}
GLsync glFenceSync(GLenum condition, GLbitfield flags) {
}
void glGetBufferParameteri64v(GLenum target, GLenum value, GLint64 *data) {
}
void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat *val) {
}
void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) {
}
GLboolean glIsSync(GLsync synnc) {
}
void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei *count, GLenum type, const GLvoid **indices, GLsizei primcount, GLint *basevertex) {
}
void glProvokingVertex(GLenum provokeMode) {
}
void glSampleMaski(GLuint maskNumber, GLbitfield mask) {
}
void glTexImage2DMultisample(GLenum target, GLsizei sample, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
void glTexImage3DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
}
void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const char *name) {
}
void glBindSampler(GLuint unit, GLuint sampler) {
}
void glDeleteSamplers(GLsizei n, const GLuint *samplers) {
}
void glGenSamplers(GLsizei n, GLuint *samplers) {
}
GLuint glGetFragDataIndex(GLuint program, const char *name) {
}
void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat *params) {
}
void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint *params) {
}
void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint *params) {
}
void glGetSamplerParameteruiv(GLuint sampler, GLenum pname, GLuint *params) {
}
GLboolean glIsSampler(GLuint id) {
}
void glQueryCounter(GLuint id, GLenum target) {
}
void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param) {
}
void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param) {
}
void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat *params) {
}
void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint *params) {
}
void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint *params) {
}
void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint *params) {
}
void glVertexAttribDivisor(GLuint index, GLuint divisor) {
}
void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id) {
}
void glEndQueryIndexed(GLenum target, GLuint index) {
}
void glBindTransformFeedback(GLenum target, GLuint id) {
}
void glDeleteTransformFeedbacks(GLsizei n, const GLuint *ids) {
}
void glDrawArraysIndirect(GLenum mode, const void *indirect) {
}
void glDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect) {
}
void glDrawTransformFeedback(GLenum mode, GLuint id) {
}
void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream) {
}
void glGenTransformFeedbacks(GLsizei n, GLuint *ids) {
}
void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) {
}
void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values) {
}
void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) {
}
void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint *values) {
}
void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint *params) {
}
GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar *name) {
}
GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar *name) {
}
void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint *values) {
}
GLboolean glIsTransformFeedback(GLuint id) {
}
void glMinSampleShading(GLfloat value) {
}
void glPatchParameteri(GLenum pname, GLint value) {
}
void glPatchParameterfv(GLenum pname, const GLfloat *values) {
}
void glPauseTransformFeedback() {
}
void glResumeTransformFeedback() {
}
void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint *indices) {
}
void glActiveShaderProgram(GLuint pipeline, GLuint program) {
}
void glBindProgramPipeline(GLuint pipeline) {
}
GLuint glCreateShaderProgramv(GLenum type, GLsizei n, const char **strings) {
}
void glDeleteProgramPipelines(GLsizei n, const GLuint *pipelines) {
}
void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble *v) {
}
void glDepthRangeIndexed(GLuint index, GLdouble nearVal, GLdouble farVal) {
}
void glGenProgramPipelines(GLsizei n, GLuint *pipelines) {
}
void glGetProgramBinary(GLuint program, GLsizei bufsize, GLsizei *length, GLenum *binaryFormat, void *binary) {
}
void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params) {
}
void glGetProgramPipelineInfoLog(GLuint pipelin, GLsizei bufsize, GLsizei *length, GLchar *infoLog) {
}
void glGetShaderPrecisionFormat(GLenum shaderType, GLenum precisionType, GLint *range, GLint *precision) {
}
GLboolean glIsProgramPipeline(GLuint pipeline) {
}
void glProgramBinary(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length) {
}
void glProgramParameteri(GLuint program, GLenum pname, GLint value) {
}
void glProgramUniform1f(GLuint program, GLint location, GLfloat v0) {
}
void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1) {
}
void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
}
void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
}
void glProgramUniform1i(GLuint program, GLint location, GLint v0) {
}
void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1) {
}
void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
}
void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
}
void glProgramUniform1ui(GLuint program, GLint location, GLuint v0) {
}
void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1) {
}
void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
}
void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
}
void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value) {
}
void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value) {
}
void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value) {
}
void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value) {
}
void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
void glReleaseShaderCompiler() {
}
void glScissorArrayv(GLuint first, GLsizei count, const GLint *v) {
}
void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) {
}
void glScissorIndexedv(GLuint index, const GLint *v) {
}
void glShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryFormat, const void *binary, GLsizei length) {
}
void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program) {
}
void glValidateProgramPipeline(GLuint pipeline) {
}
void glViewportArrayv(GLuint first, GLsizei count, const GLfloat *v) {
}
void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) {
}
void glViewportIndexedfv(GLuint index, const GLfloat *v) {
}
void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) {
}
void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei primcount, GLuint baseinstance) {
}
void glDrawArraysElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLuint baseinstance) {
}
void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, GLvoid *indices, GLsizei primcount, GLint basevertex, GLuint baseinstance) {
}
void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei primcount) {
}
void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei primcount) {
}
void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params) {
}
void glGetInternalFormativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params) {
}
void glGetInternalFormati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params) {
}
void glMemoryBarrier(GLbitfield barries) {
}
void glMemoryBarrierByRegion(GLbitfield barriers) {
}
void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
}
void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) {
}
void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
}
void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
}
void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
}
void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
}
void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLintptr stride) {
}
void glBindVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
}
void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data) {
}
void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) {
}
void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) {
}
void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizei size, GLenum format, GLenum type, const void *data) {
}
void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
}
void glDebugMessageCallback(DEBUGPROC callback, void *userParam) {
}
void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) {
}
void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const char *message) {
}
void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
}
void glDispatchComputeIndirect(GLintptr indirect) {
}
GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) {
}
void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint *params) {
}
void glGetNamedFrameBufferParameteriv(GLuint framebuffer, GLenum pname, GLint *param) {
}
void glGetObjectLabel(GLenum indentifier, GLuint name, GLsizei bufSize, GLsizei *length, char *label) {
}
void glGetObjectPtrLabel(void *ptr, GLsizei bufSize, GLsizei *length, char *label) {
}
void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint *params) {
}
void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params) {
}
GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const char *name) {
}
GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const char *name) {
}
GLint glGetProgramResourceLocationIndex(GLuint program, GLint programInterface, const char *name) {
}
void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, char *name) {
}
void glInvalidateBufferData(GLuint buffer) {
}
void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length) {
}
void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments) {
}
void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments) {
}
void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLint width, GLint height) {
}
void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachmments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
}
void glInvalidateTexImage(GLuint texture, GLint level) {
}
void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) {
}
void glMultiDrawArraysIndirect(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride) {
}
void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride) {
}
void glObjectLabel(GLenum indentifier, GLuint name, GLsizei length, const char *label) {
}
void glObjectPtrLabel(void *ptr, GLsizei length, const char *label) {
}
void glPopDebugGroup() {
}
void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const char *message) {
}
void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) {
}
void glTexBufferRange(GLenum target, GLenum internalFormat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizei size) {
}
void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
void glTexStorage3DMultisample(GLenum target, GLsizei sample, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
void glTextureBarrier() {
}
void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) {
}
void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer) {
}
void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizei size) {
}
void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer) {
}
void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex) {
}
void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex) {
}
void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
}
void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
}
void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor) {
}
void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor) {
}
void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint *buffers) {
}
void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offset, const GLintptr *sizes) {
}
void glBindImageTextures(GLuint first, GLsizei count, const GLuint *textures) {
}
void glBindSamplers(GLuint first, GLsizei count, const GLuint *samplers) {
}
void glBindTextures(GLuint first, GLsizei count, const GLuint *textures) {
}
void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offset, const GLsizei *strides) {
}
void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) {
}
void glBufferStorage(GLenum target, GLsizeiptr size, const GLvoid *data, GLbitfield flags) {
}
void glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) {
}
void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void *data) {
}
void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data) {
}
void glFramebufferParameteri(GLenum target, GLenum pname, GLint param) {
}
void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param) {
}
void glBindTextureUnit(GLuint unit, GLuint texture) {
}
void glClipControl(GLenum origin, GLenum depth) {
}
void glCreateBuffers(GLsizei n, GLuint *buffers) {
}
void glCreateFramebuffers(GLsizei n, GLuint *ids) {
}
void glCreateProgrammPipelines(GLsizei n, GLuint *pipelines) {
}
void glCreateQueries(GLenum target, GLsizei n, GLuint *ids) {
}
void glCreateRenderbuffers(GLsizei n, GLuint *renderbuffers) {
}
void glCreateSamplers(GLsizei n, GLuint *samplers) {
}
void glCreateTextures(GLenum target, GLsizei n, GLuint *textures) {
}
void glCreateTransformFeedbacks(GLsizei n, GLuint *ids) {
}
void glCreateVertexArrays(GLsizei n, GLuint *arrays) {
}
void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels) {
}
GLenum glGetGraphicsResetStatus() {
}
void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels) {
}
void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint *param) {
}
void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint *param) {
}
void glGetTransformFEedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 *param) {
}
void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param) {
}
void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint *param) {
}
void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint *param) {
}
