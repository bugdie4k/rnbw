/** \file
 *  This C header file was generated by $ANTLR version 3.2 debian-14
 *
 *     -  From the grammar source file : rnbw.g
 *     -                            On : 2017-11-04 07:00:11
 *     -                 for the lexer : rnbwLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer rnbwLexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef prnbwLexer, which is returned from a call to rnbwLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in prnbwLexer are  as follows:
 *
 *  -  void      prnbwLexer->T__22(prnbwLexer)
 *  -  void      prnbwLexer->T__23(prnbwLexer)
 *  -  void      prnbwLexer->T__24(prnbwLexer)
 *  -  void      prnbwLexer->T__25(prnbwLexer)
 *  -  void      prnbwLexer->T__26(prnbwLexer)
 *  -  void      prnbwLexer->T__27(prnbwLexer)
 *  -  void      prnbwLexer->T__28(prnbwLexer)
 *  -  void      prnbwLexer->T__29(prnbwLexer)
 *  -  void      prnbwLexer->T__30(prnbwLexer)
 *  -  void      prnbwLexer->T__31(prnbwLexer)
 *  -  void      prnbwLexer->T__32(prnbwLexer)
 *  -  void      prnbwLexer->T__33(prnbwLexer)
 *  -  void      prnbwLexer->T__34(prnbwLexer)
 *  -  void      prnbwLexer->T__35(prnbwLexer)
 *  -  void      prnbwLexer->T__36(prnbwLexer)
 *  -  void      prnbwLexer->T__37(prnbwLexer)
 *  -  void      prnbwLexer->T__38(prnbwLexer)
 *  -  void      prnbwLexer->T__39(prnbwLexer)
 *  -  void      prnbwLexer->T__40(prnbwLexer)
 *  -  void      prnbwLexer->T__41(prnbwLexer)
 *  -  void      prnbwLexer->T__42(prnbwLexer)
 *  -  void      prnbwLexer->T__43(prnbwLexer)
 *  -  void      prnbwLexer->T__44(prnbwLexer)
 *  -  void      prnbwLexer->T__45(prnbwLexer)
 *  -  void      prnbwLexer->T__46(prnbwLexer)
 *  -  void      prnbwLexer->T__47(prnbwLexer)
 *  -  void      prnbwLexer->T__48(prnbwLexer)
 *  -  void      prnbwLexer->T__49(prnbwLexer)
 *  -  void      prnbwLexer->T__50(prnbwLexer)
 *  -  void      prnbwLexer->T__51(prnbwLexer)
 *  -  void      prnbwLexer->T__52(prnbwLexer)
 *  -  void      prnbwLexer->T__53(prnbwLexer)
 *  -  void      prnbwLexer->T__54(prnbwLexer)
 *  -  void      prnbwLexer->ID(prnbwLexer)
 *  -  void      prnbwLexer->INT(prnbwLexer)
 *  -  void      prnbwLexer->WS(prnbwLexer)
 *  -  void      prnbwLexer->Tokens(prnbwLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_rnbwLexer_H
#define _rnbwLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct rnbwLexer_Ctx_struct rnbwLexer, * prnbwLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for rnbwLexer
 */
struct rnbwLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mT__22)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__23)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__24)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__25)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__26)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__27)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__28)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__29)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__30)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__31)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__32)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__33)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__34)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__35)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__36)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__37)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__38)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__39)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__40)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__41)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__42)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__43)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__44)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__45)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__46)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__47)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__48)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__49)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__50)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__51)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__52)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__53)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mT__54)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mID)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mINT)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mWS)	(struct rnbwLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct rnbwLexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct rnbwLexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API prnbwLexer rnbwLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API prnbwLexer rnbwLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define DEFAULT_INCLUDING      16
#define T__50      50
#define DEFAULT_PATH_ORDER      17
#define INCLUDING      14
#define ID      21
#define T__51      51
#define T__52      52
#define T__53      53
#define T__54      54
#define COLORS_OPT      5
#define T__26      26
#define TOP      4
#define PATH_OPT      6
#define T__27      27
#define T__28      28
#define T__29      29
#define T__22      22
#define T__23      23
#define T__24      24
#define T__25      25
#define RANGE      11
#define INT      19
#define NOT_INCLUDING      15
#define T__37      37
#define T__38      38
#define T__39      39
#define T__33      33
#define T__34      34
#define T__35      35
#define T__36      36
#define WS      20
#define EOF      -1
#define T__30      30
#define T__31      31
#define T__32      32
#define WIDTH_OPT      7
#define COLORNUM      9
#define NO_BACK      13
#define T__48      48
#define T__49      49
#define T__44      44
#define ANGLE_OPT      8
#define COLORNAME      10
#define DEFAULT_PATH_SORT      18
#define T__45      45
#define BACK      12
#define T__46      46
#define T__47      47
#define T__40      40
#define T__41      41
#define T__42      42
#define T__43      43
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for rnbwLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
