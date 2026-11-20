
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116910 <.text+0x115910>:
10116910:	55                   	push   ebp
10116911:	8b ec                	mov    ebp,esp
10116913:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10116916:	33 c0                	xor    eax,eax
10116918:	8a 0a                	mov    cl,BYTE PTR [edx]
1011691a:	84 c9                	test   cl,cl
1011691c:	74 13                	je     0x10116931
1011691e:	66 90                	xchg   ax,ax
10116920:	c1 c8 04             	ror    eax,0x4
10116923:	8d 52 01             	lea    edx,[edx+0x1]
10116926:	0f be c9             	movsx  ecx,cl
10116929:	33 c1                	xor    eax,ecx
1011692b:	8a 0a                	mov    cl,BYTE PTR [edx]
1011692d:	84 c9                	test   cl,cl
1011692f:	75 ef                	jne    0x10116920
10116931:	5d                   	pop    ebp
10116932:	c2 04 00             	ret    0x4
