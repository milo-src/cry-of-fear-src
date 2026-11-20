10119b5f:	8d 54 24 04          	lea    edx,[esp+0x4]
10119b63:	e8 fd 92 00 00       	call   0x10122e65
10119b68:	52                   	push   edx
10119b69:	9b d9 3c 24          	fstcw  WORD PTR [esp]
10119b6d:	74 49                	je     0x10119bb8
10119b6f:	66 81 3c 24 7f 02    	cmp    WORD PTR [esp],0x27f
10119b75:	74 06                	je     0x10119b7d
10119b77:	d9 2d a8 a0 16 10    	fldcw  WORD PTR ds:0x1016a0a8
10119b7d:	d9 fe                	fsin
10119b7f:	9b df e0             	fstsw  ax
10119b82:	9e                   	sahf
10119b83:	7a 1d                	jp     0x10119ba2
10119b85:	83 3d 80 ae 55 10 00 	cmp    DWORD PTR ds:0x1055ae80,0x0
10119b8c:	0f 85 2c 93 00 00    	jne    0x10122ebe
10119b92:	ba 1e 00 00 00       	mov    edx,0x1e
10119b97:	8d 0d 00 49 16 10    	lea    ecx,ds:0x10164900
10119b9d:	e9 29 93 00 00       	jmp    0x10122ecb
10119ba2:	db 2d aa a0 16 10    	fld    TBYTE PTR ds:0x1016a0aa
10119ba8:	d9 c9                	fxch   st(1)
10119baa:	d9 f5                	fprem1
10119bac:	9b df e0             	fstsw  ax
10119baf:	9e                   	sahf
10119bb0:	7a f8                	jp     0x10119baa
10119bb2:	dd d9                	fstp   st(1)
10119bb4:	d9 fe                	fsin
10119bb6:	eb cd                	jmp    0x10119b85
10119bb8:	a9 ff ff 0f 00       	test   eax,0xfffff
10119bbd:	75 31                	jne    0x10119bf0
10119bbf:	83 7c 24 08 00       	cmp    DWORD PTR [esp+0x8],0x0
10119bc4:	75 2a                	jne    0x10119bf0
10119bc6:	dd d8                	fstp   st(0)
10119bc8:	db 2d e0 28 16 10    	fld    TBYTE PTR ds:0x101628e0
10119bce:	b8 01 00 00 00       	mov    eax,0x1
10119bd3:	83 3d 80 ae 55 10 00 	cmp    DWORD PTR ds:0x1055ae80,0x0
10119bda:	0f 85 de 92 00 00    	jne    0x10122ebe
10119be0:	ba 1e 00 00 00       	mov    edx,0x1e
10119be5:	8d 0d 00 49 16 10    	lea    ecx,ds:0x10164900
10119beb:	e8 e7 91 00 00       	call   0x10122dd7
10119bf0:	5a                   	pop    edx
10119bf1:	c3                   	ret
