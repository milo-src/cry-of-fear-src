
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10103f70 <.text+0x102f70>:
10103f70:	55                   	push   ebp
10103f71:	8b ec                	mov    ebp,esp
10103f73:	51                   	push   ecx
10103f74:	53                   	push   ebx
10103f75:	56                   	push   esi
10103f76:	8b c1                	mov    eax,ecx
10103f78:	33 f6                	xor    esi,esi
10103f7a:	57                   	push   edi
10103f7b:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10103f7e:	33 db                	xor    ebx,ebx
10103f80:	6a 01                	push   0x1
10103f82:	53                   	push   ebx
10103f83:	56                   	push   esi
10103f84:	8b c8                	mov    ecx,eax
10103f86:	e8 b5 00 00 00       	call   0x10104040
10103f8b:	8b f0                	mov    esi,eax
10103f8d:	85 f6                	test   esi,esi
10103f8f:	74 30                	je     0x10103fc1
10103f91:	8b 06                	mov    eax,DWORD PTR [esi]
10103f93:	8b ce                	mov    ecx,esi
10103f95:	ff 50 78             	call   DWORD PTR [eax+0x78]
10103f98:	8b f8                	mov    edi,eax
10103f9a:	8b cf                	mov    ecx,edi
10103f9c:	8b 17                	mov    edx,DWORD PTR [edi]
10103f9e:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
10103fa4:	85 c0                	test   eax,eax
10103fa6:	74 07                	je     0x10103faf
10103fa8:	83 8f ec 02 00 00 01 	or     DWORD PTR [edi+0x2ec],0x1
10103faf:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10103fb2:	6a 01                	push   0x1
10103fb4:	53                   	push   ebx
10103fb5:	56                   	push   esi
10103fb6:	e8 85 00 00 00       	call   0x10104040
10103fbb:	8b f0                	mov    esi,eax
10103fbd:	85 f6                	test   esi,esi
10103fbf:	75 d0                	jne    0x10103f91
10103fc1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10103fc4:	43                   	inc    ebx
10103fc5:	83 fb 06             	cmp    ebx,0x6
10103fc8:	7c b6                	jl     0x10103f80
10103fca:	5f                   	pop    edi
10103fcb:	5e                   	pop    esi
10103fcc:	5b                   	pop    ebx
10103fcd:	8b e5                	mov    esp,ebp
10103fcf:	5d                   	pop    ebp
10103fd0:	c3                   	ret
