
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a1cd0 <.text+0xa0cd0>:
100a1cd0:	55                   	push   ebp
100a1cd1:	8b ec                	mov    ebp,esp
100a1cd3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100a1cd6:	56                   	push   esi
100a1cd7:	8b f1                	mov    esi,ecx
100a1cd9:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100a1cdc:	3b 82 88 01 00 00    	cmp    eax,DWORD PTR [edx+0x188]
100a1ce2:	0f 85 8f 00 00 00    	jne    0x100a1d77
100a1ce8:	8b 82 9c 01 00 00    	mov    eax,DWORD PTR [edx+0x19c]
100a1cee:	8b ca                	mov    ecx,edx
100a1cf0:	85 c0                	test   eax,eax
100a1cf2:	74 30                	je     0x100a1d24
100a1cf4:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
100a1cf7:	85 c0                	test   eax,eax
100a1cf9:	74 29                	je     0x100a1d24
100a1cfb:	51                   	push   ecx
100a1cfc:	8b 8a cc 01 00 00    	mov    ecx,DWORD PTR [edx+0x1cc]
100a1d02:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100a1d09:	6a 03                	push   0x3
100a1d0b:	50                   	push   eax
100a1d0c:	50                   	push   eax
100a1d0d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a1d12:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100a1d18:	51                   	push   ecx
100a1d19:	e8 d2 02 06 00       	call   0x10101ff0
100a1d1e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100a1d21:	83 c4 14             	add    esp,0x14
100a1d24:	8b 91 ec 01 00 00    	mov    edx,DWORD PTR [ecx+0x1ec]
100a1d2a:	85 d2                	test   edx,edx
100a1d2c:	74 37                	je     0x100a1d65
100a1d2e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a1d33:	6a 64                	push   0x64
100a1d35:	6a 00                	push   0x0
100a1d37:	83 ec 08             	sub    esp,0x8
100a1d3a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100a1d40:	03 c2                	add    eax,edx
100a1d42:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100a1d49:	3f 
100a1d4a:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100a1d51:	50                   	push   eax
100a1d52:	6a 03                	push   0x3
100a1d54:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100a1d5a:	e8 91 ac 05 00       	call   0x100fc9f0
100a1d5f:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100a1d62:	83 c4 1c             	add    esp,0x1c
100a1d65:	f6 81 a4 01 00 00 01 	test   BYTE PTR [ecx+0x1a4],0x1
100a1d6c:	75 09                	jne    0x100a1d77
100a1d6e:	56                   	push   esi
100a1d6f:	e8 8c 7b 07 00       	call   0x10119900
100a1d74:	83 c4 04             	add    esp,0x4
100a1d77:	5e                   	pop    esi
100a1d78:	5d                   	pop    ebp
100a1d79:	c2 04 00             	ret    0x4
