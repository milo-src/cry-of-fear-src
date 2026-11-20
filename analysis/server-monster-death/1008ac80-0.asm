
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ac80 <.text+0x89c80>:
1008ac80:	55                   	push   ebp
1008ac81:	8b ec                	mov    ebp,esp
1008ac83:	83 ec 18             	sub    esp,0x18
1008ac86:	56                   	push   esi
1008ac87:	8b f1                	mov    esi,ecx
1008ac89:	b9 e8 ec 1b 10       	mov    ecx,0x101bece8
1008ac8e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1008ac91:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008ac94:	c7 80 08 01 00 00 0a 	mov    DWORD PTR [eax+0x108],0xa
1008ac9b:	00 00 00 
1008ac9e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008aca1:	c7 80 20 01 00 00 cd 	mov    DWORD PTR [eax+0x120],0x3f0ccccd
1008aca8:	cc 0c 3f 
1008acab:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008acae:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x437f0000
1008acb5:	00 7f 43 
1008acb8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008acbb:	c7 80 4c 01 00 00 00 	mov    DWORD PTR [eax+0x14c],0x0
1008acc2:	00 00 00 
1008acc5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008acc8:	c7 80 60 01 00 00 00 	mov    DWORD PTR [eax+0x160],0x0
1008accf:	00 00 00 
1008acd2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008acd5:	c7 80 0c 01 00 00 01 	mov    DWORD PTR [eax+0x10c],0x1
1008acdc:	00 00 00 
1008acdf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008ace4:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008acea:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008aced:	89 08                	mov    DWORD PTR [eax],ecx
1008acef:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008acf2:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008acf8:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1008acfe:	8d 45 f4             	lea    eax,[ebp-0xc]
1008ad01:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
1008ad08:	50                   	push   eax
1008ad09:	8d 45 e8             	lea    eax,[ebp-0x18]
1008ad0c:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
1008ad13:	50                   	push   eax
1008ad14:	ff 76 04             	push   DWORD PTR [esi+0x4]
1008ad17:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1008ad1e:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
1008ad25:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [ebp-0x14],0x0
1008ad2c:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
1008ad33:	e8 f8 f2 08 00       	call   0x1011a030
1008ad38:	8b 06                	mov    eax,DWORD PTR [esi]
1008ad3a:	83 c4 10             	add    esp,0x10
1008ad3d:	8b ce                	mov    ecx,esi
1008ad3f:	c7 04 24 00 00 80 40 	mov    DWORD PTR [esp],0x40800000
1008ad46:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008ad49:	c7 86 e8 00 00 00 00 	mov    DWORD PTR [esi+0xe8],0x41c80000
1008ad50:	00 c8 41 
1008ad53:	c7 46 78 c0 c9 08 10 	mov    DWORD PTR [esi+0x78],0x1008c9c0
1008ad5a:	c7 46 7c a0 77 08 10 	mov    DWORD PTR [esi+0x7c],0x100877a0
1008ad61:	c7 86 e4 00 00 00 09 	mov    DWORD PTR [esi+0xe4],0x9
1008ad68:	00 00 00 
1008ad6b:	c7 86 e0 00 00 00 05 	mov    DWORD PTR [esi+0xe0],0x5
1008ad72:	00 00 00 
1008ad75:	5e                   	pop    esi
1008ad76:	8b e5                	mov    esp,ebp
1008ad78:	5d                   	pop    ebp
1008ad79:	c2 04 00             	ret    0x4
