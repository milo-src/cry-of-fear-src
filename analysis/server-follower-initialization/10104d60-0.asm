
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104d60 <.text+0x103d60>:
10104d60:	55                   	push   ebp
10104d61:	8b ec                	mov    ebp,esp
10104d63:	53                   	push   ebx
10104d64:	57                   	push   edi
10104d65:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10104d68:	8b d9                	mov    ebx,ecx
10104d6a:	8b 07                	mov    eax,DWORD PTR [edi]
10104d6c:	2d ed 03 00 00       	sub    eax,0x3ed
10104d71:	74 23                	je     0x10104d96
10104d73:	83 e8 04             	sub    eax,0x4
10104d76:	74 0c                	je     0x10104d84
10104d78:	57                   	push   edi
10104d79:	e8 92 a5 fb ff       	call   0x100bf310
10104d7e:	5f                   	pop    edi
10104d7f:	5b                   	pop    ebx
10104d80:	5d                   	pop    ebp
10104d81:	c2 04 00             	ret    0x4
10104d84:	6a 63                	push   0x63
10104d86:	6a 00                	push   0x0
10104d88:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10104d8e:	83 c4 08             	add    esp,0x8
10104d91:	83 f8 4b             	cmp    eax,0x4b
10104d94:	7c 44                	jl     0x10104dda
10104d96:	56                   	push   esi
10104d97:	8b cb                	mov    ecx,ebx
10104d99:	e8 22 0b 00 00       	call   0x101058c0
10104d9e:	8b 33                	mov    esi,DWORD PTR [ebx]
10104da0:	83 ec 10             	sub    esp,0x10
10104da3:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
10104daa:	40 
10104dab:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10104db2:	3f 
10104db3:	c7 44 24 04 9a 99 59 	mov    DWORD PTR [esp+0x4],0x4059999a
10104dba:	40 
10104dbb:	c7 04 24 33 33 33 40 	mov    DWORD PTR [esp],0x40333333
10104dc2:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10104dc8:	83 c4 04             	add    esp,0x4
10104dcb:	8b cb                	mov    ecx,ebx
10104dcd:	d9 1c 24             	fstp   DWORD PTR [esp]
10104dd0:	ff 77 04             	push   DWORD PTR [edi+0x4]
10104dd3:	ff 96 a0 01 00 00    	call   DWORD PTR [esi+0x1a0]
10104dd9:	5e                   	pop    esi
10104dda:	5f                   	pop    edi
10104ddb:	5b                   	pop    ebx
10104ddc:	5d                   	pop    ebp
10104ddd:	c2 04 00             	ret    0x4
