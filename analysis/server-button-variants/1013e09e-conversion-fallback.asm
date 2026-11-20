
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1013e09e <.text+0x13d09e>:
1013e09e:	55                   	push   ebp
1013e09f:	8b ec                	mov    ebp,esp
1013e0a1:	83 c4 f0             	add    esp,0xfffffff0
1013e0a4:	83 e4 f0             	and    esp,0xfffffff0
1013e0a7:	d9 c0                	fld    st(0)
1013e0a9:	db 3c 24             	fstp   TBYTE PTR [esp]
1013e0ac:	8b 04 24             	mov    eax,DWORD PTR [esp]
1013e0af:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1013e0b3:	0f b7 4c 24 08       	movzx  ecx,WORD PTR [esp+0x8]
1013e0b8:	0f ba f1 0f          	btr    ecx,0xf
1013e0bc:	66 81 f9 ff 3f       	cmp    cx,0x3fff
1013e0c1:	72 36                	jb     0x1013e0f9
1013e0c3:	85 d2                	test   edx,edx
1013e0c5:	79 55                	jns    0x1013e11c
1013e0c7:	66 81 f9 3e 40       	cmp    cx,0x403e
1013e0cc:	73 35                	jae    0x1013e103
1013e0ce:	66 f7 d9             	neg    cx
1013e0d1:	66 81 c1 3e 40       	add    cx,0x403e
1013e0d6:	d9 fc                	frndint
1013e0d8:	dd d8                	fstp   st(0)
1013e0da:	80 f9 20             	cmp    cl,0x20
1013e0dd:	72 04                	jb     0x1013e0e3
1013e0df:	8b c2                	mov    eax,edx
1013e0e1:	33 d2                	xor    edx,edx
1013e0e3:	0f ad d0             	shrd   eax,edx,cl
1013e0e6:	d3 ea                	shr    edx,cl
1013e0e8:	66 83 7c 24 08 00    	cmp    WORD PTR [esp+0x8],0x0
1013e0ee:	7d 07                	jge    0x1013e0f7
1013e0f0:	f7 d8                	neg    eax
1013e0f2:	83 d2 00             	adc    edx,0x0
1013e0f5:	f7 da                	neg    edx
1013e0f7:	c9                   	leave
1013e0f8:	c3                   	ret
1013e0f9:	d9 fc                	frndint
1013e0fb:	dd d8                	fstp   st(0)
1013e0fd:	33 c0                	xor    eax,eax
1013e0ff:	33 d2                	xor    edx,edx
1013e101:	c9                   	leave
1013e102:	c3                   	ret
1013e103:	8d 0c 55 00 00 00 00 	lea    ecx,[edx*2+0x0]
1013e10a:	77 10                	ja     0x1013e11c
1013e10c:	0b c8                	or     ecx,eax
1013e10e:	75 0c                	jne    0x1013e11c
1013e110:	66 83 7c 24 08 00    	cmp    WORD PTR [esp+0x8],0x0
1013e116:	7d 04                	jge    0x1013e11c
1013e118:	dd d8                	fstp   st(0)
1013e11a:	c9                   	leave
1013e11b:	c3                   	ret
1013e11c:	d8 1d 58 b5 1e 10    	fcomp  DWORD PTR ds:0x101eb558
1013e122:	c9                   	leave
1013e123:	ba 00 00 00 80       	mov    edx,0x80000000
1013e128:	33 c0                	xor    eax,eax
1013e12a:	c3                   	ret
