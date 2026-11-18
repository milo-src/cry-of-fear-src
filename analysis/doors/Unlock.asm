
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10048e40 <.text+0x47e40>:
10048e40:	55                   	push   ebp
10048e41:	8b ec                	mov    ebp,esp
10048e43:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
10048e47:	56                   	push   esi
10048e48:	8b f1                	mov    esi,ecx
10048e4a:	0f 84 95 00 00 00    	je     0x10048ee5
10048e50:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10048e53:	8b 91 f8 01 00 00    	mov    edx,DWORD PTR [ecx+0x1f8]
10048e59:	85 d2                	test   edx,edx
10048e5b:	74 34                	je     0x10048e91
10048e5d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048e62:	6a 64                	push   0x64
10048e64:	6a 00                	push   0x0
10048e66:	83 ec 08             	sub    esp,0x8
10048e69:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10048e6f:	03 c2                	add    eax,edx
10048e71:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10048e78:	3f 
10048e79:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10048e80:	50                   	push   eax
10048e81:	6a 04                	push   0x4
10048e83:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10048e89:	e8 62 3b 0b 00       	call   0x100fc9f0
10048e8e:	83 c4 1c             	add    esp,0x1c
10048e91:	8b 8e 98 01 00 00    	mov    ecx,DWORD PTR [esi+0x198]
10048e97:	85 c9                	test   ecx,ecx
10048e99:	74 1d                	je     0x10048eb8
10048e9b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048ea0:	6a 00                	push   0x0
10048ea2:	6a 05                	push   0x5
10048ea4:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10048eaa:	03 c1                	add    eax,ecx
10048eac:	50                   	push   eax
10048ead:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10048eb0:	e8 5b 09 0d 00       	call   0x10119810
10048eb5:	83 c4 10             	add    esp,0x10
10048eb8:	c7 86 90 01 00 00 00 	mov    DWORD PTR [esi+0x190],0x0
10048ebf:	00 00 00 
10048ec2:	c7 86 94 01 00 00 00 	mov    DWORD PTR [esi+0x194],0x0
10048ec9:	00 00 00 
10048ecc:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048ed1:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10048ed5:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
10048edc:	10 
10048edd:	f3 0f 11 86 a4 01 00 	movss  DWORD PTR [esi+0x1a4],xmm0
10048ee4:	00 
10048ee5:	5e                   	pop    esi
10048ee6:	5d                   	pop    ebp
10048ee7:	c2 04 00             	ret    0x4
10048eea:	cc                   	int3
10048eeb:	cc                   	int3
10048eec:	cc                   	int3
10048eed:	cc                   	int3
10048eee:	cc                   	int3
10048eef:	cc                   	int3
