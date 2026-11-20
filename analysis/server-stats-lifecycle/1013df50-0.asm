
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1013df50 <.text+0x13cf50>:
1013df50:	83 3d ec 28 23 10 02 	cmp    DWORD PTR ds:0x102328ec,0x2
1013df57:	7c 08                	jl     0x1013df61
1013df59:	83 ec 04             	sub    esp,0x4
1013df5c:	db 0c 24             	fisttp DWORD PTR [esp]
1013df5f:	58                   	pop    eax
1013df60:	c3                   	ret
1013df61:	55                   	push   ebp
1013df62:	8b ec                	mov    ebp,esp
1013df64:	83 c4 f0             	add    esp,0xfffffff0
1013df67:	83 e4 f0             	and    esp,0xfffffff0
1013df6a:	d9 c0                	fld    st(0)
1013df6c:	db 3c 24             	fstp   TBYTE PTR [esp]
1013df6f:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1013df73:	0f b7 4c 24 08       	movzx  ecx,WORD PTR [esp+0x8]
1013df78:	0f ba f1 0f          	btr    ecx,0xf
1013df7c:	1b d2                	sbb    edx,edx
1013df7e:	66 81 f9 ff 3f       	cmp    cx,0x3fff
1013df83:	72 1f                	jb     0x1013dfa4
1013df85:	85 c0                	test   eax,eax
1013df87:	79 36                	jns    0x1013dfbf
1013df89:	66 81 f9 1e 40       	cmp    cx,0x401e
1013df8e:	73 1c                	jae    0x1013dfac
1013df90:	66 f7 d9             	neg    cx
1013df93:	66 81 c1 3e 40       	add    cx,0x403e
1013df98:	d9 fc                	frndint
1013df9a:	dd d8                	fstp   st(0)
1013df9c:	d3 e8                	shr    eax,cl
1013df9e:	33 c2                	xor    eax,edx
1013dfa0:	2b c2                	sub    eax,edx
1013dfa2:	c9                   	leave
1013dfa3:	c3                   	ret
1013dfa4:	d9 fc                	frndint
1013dfa6:	dd d8                	fstp   st(0)
1013dfa8:	33 c0                	xor    eax,eax
1013dfaa:	c9                   	leave
1013dfab:	c3                   	ret
1013dfac:	77 11                	ja     0x1013dfbf
1013dfae:	85 d2                	test   edx,edx
1013dfb0:	79 0d                	jns    0x1013dfbf
1013dfb2:	3d 00 00 00 80       	cmp    eax,0x80000000
1013dfb7:	75 06                	jne    0x1013dfbf
1013dfb9:	d9 fc                	frndint
1013dfbb:	dd d8                	fstp   st(0)
1013dfbd:	c9                   	leave
1013dfbe:	c3                   	ret
1013dfbf:	d8 1d 58 b5 1e 10    	fcomp  DWORD PTR ds:0x101eb558
1013dfc5:	c9                   	leave
1013dfc6:	b8 00 00 00 80       	mov    eax,0x80000000
1013dfcb:	c3                   	ret
