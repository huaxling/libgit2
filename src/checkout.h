/*
 * Copyright (C) the libgit2 contributors. All rights reserved.
 *
 * This file is part of libgit2, distributed under the GNU GPL v2 with
 * a Linking Exception. For full terms see the included COPYING file.
 */
#ifndef INCLUDE_checkout_h__
#define INCLUDE_checkout_h__

#include "git2/checkout.h"
#include "iterator.h"

#define GIT_CHECKOUT__NOTIFY_CONFLICT_TREE (1u << 12)

/**
 * Update the working directory to match the target iterator.  The
 * expected baseline value can be passed in via the checkout options
 * or else will default to the HEAD commit.
 */
extern int git_checkout_iterator(
	git_iterator *target,
	const git_checkout_opts *opts);

#endif
