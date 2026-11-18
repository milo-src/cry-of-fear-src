
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004db90 <.text+0x4cb90>:
1004db90:	55                   	push   ebp
1004db91:	8b ec                	mov    ebp,esp
1004db93:	56                   	push   esi
1004db94:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1004db97:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1004db9a:	85 f6                	test   esi,esi
1004db9c:	75 13                	jne    0x1004dbb1
1004db9e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1004dba4:	85 c0                	test   eax,eax
1004dba6:	74 06                	je     0x1004dbae
1004dba8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1004dbae:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1004dbb1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1004dbb7:	85 c9                	test   ecx,ecx
1004dbb9:	74 07                	je     0x1004dbc2
1004dbbb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1004dbbe:	85 c0                	test   eax,eax
1004dbc0:	75 27                	jne    0x1004dbe9
1004dbc2:	68 04 01 00 00       	push   0x104
1004dbc7:	51                   	push   ecx
1004dbc8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1004dbce:	83 c4 08             	add    esp,0x8
1004dbd1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1004dbd4:	85 c0                	test   eax,eax
1004dbd6:	74 0c                	je     0x1004dbe4
1004dbd8:	c7 00 44 16 1b 10    	mov    DWORD PTR [eax],0x101b1644
1004dbde:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1004dbe1:	5e                   	pop    esi
1004dbe2:	5d                   	pop    ebp
1004dbe3:	c3                   	ret
1004dbe4:	33 c0                	xor    eax,eax
1004dbe6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1004dbe9:	5e                   	pop    esi
1004dbea:	5d                   	pop    ebp
1004dbeb:	c3                   	ret
1004dbec:	cc                   	int3
1004dbed:	cc                   	int3
1004dbee:	cc                   	int3
1004dbef:	cc                   	int3
