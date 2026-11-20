
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10107d70 <.text+0x106d70>:
10107d70:	55                   	push   ebp
10107d71:	8b ec                	mov    ebp,esp
10107d73:	56                   	push   esi
10107d74:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10107d77:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10107d7a:	85 f6                	test   esi,esi
10107d7c:	75 13                	jne    0x10107d91
10107d7e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10107d84:	85 c0                	test   eax,eax
10107d86:	74 06                	je     0x10107d8e
10107d88:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10107d8e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10107d91:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10107d97:	85 c9                	test   ecx,ecx
10107d99:	74 07                	je     0x10107da2
10107d9b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10107d9e:	85 c0                	test   eax,eax
10107da0:	75 27                	jne    0x10107dc9
10107da2:	68 dc 00 00 00       	push   0xdc
10107da7:	51                   	push   ecx
10107da8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10107dae:	83 c4 08             	add    esp,0x8
10107db1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10107db4:	85 c0                	test   eax,eax
10107db6:	74 0c                	je     0x10107dc4
10107db8:	c7 00 04 01 1e 10    	mov    DWORD PTR [eax],0x101e0104
10107dbe:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10107dc1:	5e                   	pop    esi
10107dc2:	5d                   	pop    ebp
10107dc3:	c3                   	ret
10107dc4:	33 c0                	xor    eax,eax
10107dc6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10107dc9:	5e                   	pop    esi
10107dca:	5d                   	pop    ebp
10107dcb:	c3                   	ret
